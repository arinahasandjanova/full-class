#include <iostream>
#include <string>
#include <vector>

/*class Cat {
private:
    std::string name;
public:
    Cat(const std::string& n): name(n){}
    const std::string& GetName() const {
        return name;
    }
    std::string Voice() const {
        return "Meow";
    }
};

class Dog {
private:
    std::string name;
public:
    Dog(const std::string& n): name(n){}
    const std::string& GetName() const {
        return name;
    }
    std::string Voice() const {
        return "Woof";
    }
};*/

/*enum class AnimalType {
    Cat,
    Dog
};

class Animal {
private:
    AnimalType type;
    std::string name;
public:
    Animal(AnimalType t, const std::string& n): type(t), name(n){}
    const std::string& GetName() const {
        return name;
    }
    std::string Voice() const {
       switch(type) {
           case AnimalType::Cat:
               return "Meow";
               break;
           case AnimalType::Dog:
               return "Woof";
               break;
           default:
               return "Unknown creature";
       }
    }
};*/

class Animal {
private:
    std::string name;
public:
    Animal(const std::string& n): name(n){}
    const std::string& GetName() const {
        return name;
    }
    virtual std::string Voice() const = 0; //теперь это абстрактный класс если у виртуальной функции есть  =0
    virtual ~Animal(){} //виртуальный деструктор
};

class Cat:public Animal {
public:
    Cat(const std::string& n): Animal(n){}
    std::string Voice() const override{
        return "Meow";
    }
};

class Dog:public Animal {
public:
    Dog(const std::string& n): Animal(n){}
    std::string Voice() const override {
        return "Woof";
    }
};

class Shepherd: public Dog {
public:
    std::string Voice() const override final{}
};

void process(const Animal& creature) {
    std::cout<<creature.GetName()<<": "<<creature.Voice()<<"\n";
}

int main() {
    //Animal c(AnimalType::Cat, "Tom");
    //Animal d(AnimalType::Dog, "Sharik");

    std::vector<Animal*> zoo;
    //Cat c("Tom");
    //Dog d("Sharik");
    //zoo.push_back(&c); было с проблемами
    //zoo.push_back(&d);
    zoo.push_back(new Cat("Tom"));
    zoo.push_back(new Dog("Sharik"));
    process(*zoo[0]);
    process(*zoo[1]);
    for(Animal* animal:zoo) {
        delete animal;
    }

    return 0;
}
