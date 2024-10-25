#include <iostream>
#include <utility>

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
        return *this;
    }
    Logger(Logger&& other): id(++counter) {
        std::cout<<"Logger(&&):"<<id<<"\n";
    }
    Logger& operator=(Logger&& other){
        std::cout<<"Logger=&&:"<<id<<"\n";
        return *this;
    }
    ~Logger() {
        --counter;
        std::cout<<"~Logger():"<<id<<"\n";
    }
};

class InheritedLogger: public Logger {
public:
    InheritedLogger() {
        std::cout<<"InheritedLogger()\n";
    }
    ~InheritedLogger() {
        std::cout<<"~InheritedLogger()\n";
    }
};

void f(const Logger& x) {
    std::cout<<"void f\n";
}
void f(const Logger&& x) {
    std::cout<<"void f temp\n";
}

int main() {
    InheritedLogger x;

    /*Logger x1;
    Logger x2;
    x2=x1;
    x2=std::move(x1);*/

    //Logger x3=Logger();
    //Logger x4=std::move(x1);

    /*f(Logger());
    std::cout<<"Hello!\n";
    Logger x;
    f(x);
    std::cout<<"Bye(\n";*/

    return 0;
}
