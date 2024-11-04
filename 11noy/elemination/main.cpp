#include <iostream>

struct WrongAgeException {
    int age;
};

int ReadAge() {
    std::cin.exceptions(std::istream::failbit);
    int age;
    std::cin>>age;
    if(age<0 || age>=128) {
        throw WrongAgeException(age);
    }
    return age;
}
int main() {
    try {
        int age = ReadAge();
        std::cout<<"age is: "<<age<<"\n";
    } catch (const WrongAgeException& ex) {
        std::cerr<<"age is not correct: "<<ex.age<<"\n";
        return 1;
    } catch (const std::istream::failure& ex) {
        std::cerr<<"failed to read stream: "<<ex.what()<<"\n";
        return -1;
    } catch (...) {
        std::cerr<<"you're just stupid and can't even print a number between 0 and 128";
        return -2;
    }
    return 0;
}