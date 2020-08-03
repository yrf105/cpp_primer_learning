#ifndef TEXT_QUERY_HPP
#define TEXT_QUERY_HPP

#include <sstream>
#include <fstream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <memory>
#include <iostream>

// #include "QueryResult.hpp"

using std::vector;
using std::string;
using std::map;
using std::set;
using std::ifstream;
using std::getline;
using std::shared_ptr;
using std::istringstream;
using std::cout;
using std::endl;

class TextQuery{

public:
    TextQuery() = default;
    TextQuery(ifstream &);
    void query(const string &);
    
private:
    vector<string> str_vec;
    map<string, set<int>> word_line_number;

};

TextQuery::TextQuery(ifstream &infile) {
    string line, word;
    size_t line_number = 0;
    while (getline(infile, line)) {
        str_vec.emplace_back(line);
        istringstream record(line);
        while (record >> word) word_line_number[word].insert(line_number);
        ++ line_number;
    }
}

void TextQuery::query(const string &s) {
    if (word_line_number[s].empty()) cout << s << " does not occurs" << endl;
    else {
        cout << "element occurs " << word_line_number[s].size() << " times" << endl;;
        for (auto i : word_line_number[s]) {
            cout << "(line " << i << ") " << str_vec[i] << endl;
        }
    }

}

#endif