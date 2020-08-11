#ifndef STR_BLOB_HPP
#define STR_BLOB_HPP

#include <vector>
#include <string>
#include <memory>

class StrBlobPtr;

class StrBlob {
    friend class StrBlobPtr;

public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlob();
    StrBlob(std::initializer_list<std::string>&);
    size_type size() const {return data -> size();};
    bool empty() const {return data -> empty();};
    // 添加和删除元素
    void push_back(const std::string &s) {data -> push_back(s);};
    void pop_back();
    // 元素访问
    std::string& front();
    const std::string& front() const;
    std::string& back();
    const std::string& back() const;

private:
    // 数据共享常使用智能指针来实现
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type i, const std::string &msg) const;
};

StrBlob::StrBlob(): 
data(std::make_shared<std::vector<std::string>>()) { }

StrBlob::StrBlob(std::initializer_list<std::string>& li) : 
    data(std::make_shared<std::vector<std::string>>(li)) {}

void StrBlob::check(size_type i, const std::string &msg) const {
    if (i >= data -> size()) 
        throw std::out_of_range(msg);
}

void StrBlob::pop_back() {
    check(0, "pop_back on empty StrBlob");
    data -> pop_back();
}

std::string& StrBlob::front() {
    check(0, "front on empty StrBlob");
    return data -> front();
}

const std::string& StrBlob::front() const {
    check(0, "front on empty StrBlob");
    return data -> front();
}

std::string& StrBlob::back() {
    check(0, "back on empty StrBolb");
    return data -> back();
}

const std::string& StrBlob::back() const {
    check(0, "back on empty StrBolb");
    return data -> back();
}

#endif