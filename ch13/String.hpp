#ifndef STRING_H
#define STRING_H

#include <memory>

class String {

public:
    String() : elements(nullptr), first_free(nullptr) { }
    String(const char*);
    String(const String&);
    String& operator= (const String&);
    ~String();
    char* begin() const { return elements; }
    char* end() const { return first_free; }
    size_t capacity() const { return cap - elements; }
    size_t size() const { return first_free - elements; }
    void push_back(const char);

private:
    static std::allocator<char> alloc;
    void free();
    void reallocate();
    void chk_n_alloc() {
        if (capacity() == size()) 
            reallocate();
    }
    std::pair<char*, char*> alloc_n_copy(const char*, const char*);
    void range_initialize(const char*, const char*);
    char *elements;
    char *first_free;
    char *cap;
};

#endif