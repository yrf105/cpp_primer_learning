#ifndef QUERY_RESULT_HPP
#define QUERY_RESULT_HPP

#include <string>
#include <vector>
#include <set>
#include <map>
#include <memory>
#include <fstream>
#include <sstream>
#include <tuple>

using line_no = std::vector<std::string>::size_type;

using QueryResult = std::tuple<std::string,
                                std::shared_ptr<std::set<line_no>>,
                                std::shared_ptr<std::vector<std::string>>>;

std::ostream& print(std::ostream& os, const QueryResult& qr) {
    os << std::get<0>(qr) << " occurs " << std::get<1>(qr) -> size() << " " << "times" << std::endl;

    for (auto num : *(std::get<1>(qr))) {
        os << "\t(line " << num + 1 << ") " << *(std::get<2>(qr) -> begin() + num) << std::endl;
    }

    return os;
}

#endif