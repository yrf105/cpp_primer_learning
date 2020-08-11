#ifndef QUERY_RESULT_HPP
#define QUERY_RESULT_HPP

#include <string>
#include <vector>
#include <set>
#include <map>
#include <memory>
#include <fstream>
#include <sstream>

class QueryResult {

friend std::ostream& print(std::ostream&, const QueryResult&);

public:
    using line_no = std::vector<std::string>::size_type;
    QueryResult() = default;
    QueryResult(std::string s, 
                std::shared_ptr<std::set<line_no>> p, 
                std::shared_ptr<std::vector<std::string>> f) :
                word(s), lines(p), file(f) { }

private:
    std::string word;
    std::shared_ptr<std::set<line_no>> lines;
    std::shared_ptr<std::vector<std::string>> file;

};

std::ostream& print(std::ostream& os, const QueryResult& qr) {
    os << qr.word << " occurs " << qr.lines -> size() << " " << "times" << std::endl;

    for (auto num : *(qr.lines)) {
        os << "\t(line " << num + 1 << ") " << *(qr.file -> begin() + num) << std::endl;
    }

    return os;
}

#endif