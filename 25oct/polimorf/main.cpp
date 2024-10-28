#include <iostream>

class A {
private:
    int x;
public:
    void func1(){};
    void func2(){};
};
class B :public A {    //б наследует паблик а, но хранит приват а
private:
    int y;
public:
    void func2(){};
    void func3(){};
};
class C {
private:
    A a;
    int y;
public:
    void func1(){
        return a.func1();
    }
    void func2(){};
    void func3(){};
    const A& GetA()const {
        return a;
    }
};

void doNothing(const A&){}; //примет и элем из б

int main() {
    C c;
    c.func1();
    c.func2();
    c.func3();
    doNothing(c.GetA());

    /*B b;
    b.func1();
    b.func2(); //переопределенная функция из б
    b.A::func2(); //сама функция из а
    b.func3();
    std::cout<<sizeof(A)<<" "<<sizeof(B)<<"\n";*/

    return 0;
}
