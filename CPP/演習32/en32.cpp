#include <iostream>
#include <string>
using namespace std;

//親クラス---------------
class Animal
{
protected:
    string name_;
    int age_;
public:
    Animal(string name, int age);
    virtual void show() = 0;
};

Animal::Animal(string name, int age) : name_(name), age_(age) {}
//----------------------

//子クラス---------------
class Dog: public Animal
{
public:
    Dog(string name, int age);
    virtual void show();
};

Dog::Dog(string name, int age) : Animal(name, age) {}

void Dog::show()
{
    cout << "名前:" << name_ << " |年齢:" << age_ << "歳" << endl;
}
//----------------------

int main(void)
{
    Animal* pet = new Dog("ポチ",5);
    pet->show();
    delete pet;
    return 0;
}