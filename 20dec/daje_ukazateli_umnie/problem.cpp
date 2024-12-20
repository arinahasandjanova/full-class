#include <iostream>
#include <memory>
#include <utility>

int* f() {
    return new int(17);
}

std::unique_ptr<int> g() {
    return std::make_unique<int>(17);
}

/*void sendIn(std::unique_ptr<Logger> x) {
    ///
}*/

/*int main() {

     auto smart=std::make_unique<Logger>();
     sendIn(std::move(smart));

    f();
    g();

    return 0;
}*/