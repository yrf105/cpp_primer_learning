#include "String.hpp"

std::allocator<char> String::alloc;

void String::range_initialize(const char *a, const char *e) {
    auto newData = alloc_n_copy(a, e);
    elements = newData.first;
    first_free = cap = newData.second;
}

String::String(const char *s) {
    String();
    char *c = const_cast<char*>(s);
    while (*c) {
        chk_n_alloc();
        alloc.construct(first_free++, *c);
    }  
}

String::String(const String &S) {
    range_initialize(S.begin(), S.end());
}

String& String::operator= (const String &S) {
    auto newData = alloc_n_copy(S.begin(), S.end());
    free();
    elements = newData.first;
    first_free = cap = newData.second;
    return *this;
}

void String::free() {
    for (auto c = first_free; c != elements; /*空*/)
        alloc.destroy(--c);
    alloc.deallocate(elements, first_free - elements);
}

String::~String() { free(); }

void String::push_back(const char c) {
    chk_n_alloc();
    alloc.construct(first_free++, c);
}

std::pair<char*, char*> 
String::alloc_n_copy(const char *b, const char *e) {
    auto newData = alloc.allocate(e - b);
    return {newData, std::uninitialized_copy(elements, first_free, newData)};
}

void String::reallocate() {
    auto newCapacity = size() == 0 ? 1 : size() * 2;
    auto newData = alloc.allocate(newCapacity);
    auto ele = elements;
    auto nd = newData;
    while (ele != first_free)
        alloc.construct(nd++, std::move(*(ele++)));
    elements = newData;
    first_free = nd;
    cap = elements + newCapacity;
}