#include <boost/algorithm/string.hpp>
#include <iostream>

int main() {
    std::string input = "MSU\tBAKU\tLab";
    std::vector<std::string> result;
    boost::split(result, input, boost::is_any_of("\t"));
    std::cout << input << "\n";
    for(const auto& item: result) {
        std::cout << item << "\n";
    }

    return 0;
}