#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
    string name_;
    int age_;
public:
    Animal();
    virtual void show();
    virtual ~Animal() {}
};

Animal::Animal() : name_(""), age_(0) {}

void Animal::show()
{
    cout << "名前:" << name_ << " |年齢:" << age_ << "歳" << endl;
    cout << "呼ばれたのはAnimalクラスです" << endl;
}

class Dog: public Animal
{
public:
    Dog(string name, int age);
    virtual void show();
};

Dog::Dog(string name,int age)
{
    name_ = name;
    age_ = age;
}

void Dog::show()
{
    cout << "名前:" << name_ << " |年齢:" << age_ << "歳" << endl;
    cout << "呼ばれたのはDogクラスです" << endl;
}

int main(void)
{
    Animal* pet = new Dog("ポチ",5);
    pet->show();
    delete pet;
    return 0;
}