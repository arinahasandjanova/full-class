#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>

using namespace boost::multiprecision;

int128_t boost_product(long long A, long long B) {
    int128_t ans = (int128_t)A*B;
    return ans;
}

int main(){
    long long first = 3568807575;
    long long second = 297805705675;
    std::cout << "Product of " << first << " and " <<second << " is " << boost_product(first, second);

    return 0;
}
