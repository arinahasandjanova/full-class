#include <iostream>
#include <string>

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
    virtual std::string Voice() const {
        return "Genetic voice";
    }
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
    std::string Voice() const override{
        return "Woof";
    }
};

class Shepherd: class Dog {
public:
    std::string Voice() const override final{}
};

void process(const Animal& creature) {
    std::cout<<creature.GetName()<<"\n";
}

int main() {
    //Animal c(AnimalType::Cat, "Tom");
    //Animal d(AnimalType::Dog, "Sharik");

    Cat c("Tom");
    Dog d("Sharik");
    process(c);
    process(d);

    return 0;
}
