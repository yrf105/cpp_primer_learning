#ifndef QUERY_RESULT_HPP
#define QUERY_RESULT_HPP

#include <iostream>
#include <vector>
#include <string>
#include <memory>

#include "TextQuery.hpp"

using std::vector;
using std::string;
using std::ostream;
using std::endl;
using std::shared_ptr;

class QueryResult {

public:
    QueryResult() = default;
    QueryResult(const size_t t, const set<vector<string>::size_type> ln, 
                const string &str, shared_ptr<TextQuery> _p) 
        :  times(t), line_number(ln), text(str), p(_p) {};
    void print(ostream &);

private:
    size_t times = 0;
    set<vector<string>::size_type> line_number;
    string text;
    shared_ptr<TextQuery> p;
};

void QueryResult::print(ostream &os) {
    os << "element occurs " << times << " times" << endl;;
    // for (auto i : line_number) {
    //     os << "(line " << i << ") " << endl 
    //         << p -> 
    // }
}

#endif