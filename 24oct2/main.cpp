#include <iostream>
#include <exception>

class Logger {
private:
    inline static int counter = 0;
    const int id = 0;
public:
    Logger():id(++counter) {
        std::cout<<"Logger():"<<id<<"\n";
    }
    Logger(const Logger& other): id(++counter){
        std::cout<<"Logger(copy):"<<id<<"\n";
    }
    Logger& operator=(const Logger& other){
        std::cout<<"Logger=:"<<id<<"\n";
    }
    ~Logger() {
        --counter;
        std::cout<<"~Logger():"<<id<<"\n";
    }
};

class C {
private:
    Logger x;
public:
    C() {
        std::cout<<"C()\n";
        Logger y;
        throw std::exception();
    }
    ~C() {
        std::cout<<"~C()\n";
    }
};

void f() {
    std::cout<<"f() func: \n";
    Logger x;
    throw std::exception();
}

int main() {
    /*try {
        Logger q;
        f();
    }catch (const std::exception& ) {
        std::cerr<<"something bad\n";
        return 1;
    }*/

    try {
        C c;
    }catch(const std::exception& ) {
        std::cerr<<"something bad\n";
        return 1;
    }

    return 0;
}
