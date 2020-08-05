#ifndef TEXT_QUERY_HPP
#define TEXT_QUERY_HPP

#include <string>
#include <vector>
#include <set>
#include <map>
#include <memory>
#include <fstream>
#include <sstream>

#include "QueryResult.hpp"

// class QueryResult;
class TextQuery {

public:
    using line_no = std::vector<std::string>::size_type;
    TextQuery() = default;
    TextQuery(std::ifstream &);
    QueryResult query(const std::string&) const;

private:
    // 输入文件
    std::shared_ptr<std::vector<std::string>> file;
    std::map<std::string, std::shared_ptr<std::set<line_no>>> wm; 

};

TextQuery::TextQuery(std::ifstream& is) : file(new std::vector<std::string>) {
    std::string text;
    while (std::getline(is, text)) {
        file -> push_back (text);
        int n = file -> size() - 1;
        std::istringstream line(text);
        std::string word;
        while (line >> word) {
            // 如果 word 不在 wm 中，那么 wm[word] 会将 word 添加到 wm 中，且对应的 value 是一个空指针
            auto &lines = wm[word];
            if (!lines) 
                lines.reset(new std::set<line_no>);
            lines -> insert(n);
        }
    }
}

QueryResult TextQuery::query(const std::string &word) const {
    static std::shared_ptr<std::set<line_no>> nodata(new std::set<line_no>);
    auto loc = wm.find(word);
    if (loc == wm.end())
        return std::make_tuple(word, nodata, file);
    else 
        return std::make_tuple(word, loc -> second, file);
}

#endif