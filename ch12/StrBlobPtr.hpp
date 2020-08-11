#ifndef STR_BLOB_PTR_HPP
#define STR_BLOB_PTR_HPP

#include <memory>
#include <vector>
#include <string>

#include "StrBlob.hpp"

class StrBlobPtr {

public:
    StrBlobPtr(): curr(0) { }
    StrBlobPtr(StrBlob &a, size_t sz = 0) :
        wptr(a.data), curr(sz) { };
    std::string& deref() const {
        auto p = check(curr, "dereference past end");
        return (*p)[curr];
    }
    // 前缀递增
    StrBlobPtr& incr() {
        check(curr, "increment past end of StrBlobPtr");
        ++curr;
        return *this;
    } 

private:
    // 若检查成功 check 返回一个 vector 的 shared_ptr
    std::shared_ptr<std::vector<std::string>>
        check(std::size_t i, const std::string &msg) const {
            auto ret = wptr.lock();
            if (!ret) 
                throw std::runtime_error("unbound StrBlobPtr");
            if (i >= ret -> size()) 
                throw std::out_of_range(msg);
        }
    std::weak_ptr<std::vector<std::string>> wptr;
    std::size_t curr;

};


#endif