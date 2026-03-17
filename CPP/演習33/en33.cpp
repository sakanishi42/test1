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
    //~Animal();
    virtual ~Animal();
};

Animal::Animal(string name, int age) : name_(name), age_(age) {}

Animal::~Animal()
{
    cout << "Animal側のデストラクタが呼び出されました。" << endl;
}
//----------------------

//子クラス---------------
class Dog: public Animal
{
public:
    Dog(string name, int age);
    virtual void show();
    //~Dog();
    virtual ~Dog();
};

Dog::Dog(string name, int age) : Animal(name, age) {}

Dog::~Dog()
{
    cout << "Dog側のデストラクタが呼び出されました" << endl;
}

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