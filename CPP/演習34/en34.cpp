#include <iostream>
#include <string>
using namespace std;

//親クラス---------------
class Animal
{
public:
    virtual ~Animal();
public:
    virtual void show() = 0;
};

Animal::~Animal(){}
//----------------------

//子クラス1---------------
class Dog: public Animal
{
private:
    string name_;
    int age_;
public:
    Dog(string name, int age);
    virtual ~Dog();
public:
    virtual void show();
};

Dog::Dog(string name, int age) : name_(name), age_(age){}

Dog::~Dog()
{
    cout << "Dogクラスのデストラクタが呼び出されました" << endl;
}

void Dog::show()
{
    cout << "名前:" << name_ << " |年齢:" << age_ << "歳" << endl;
}
//----------------------

//子クラス2---------------
class Cat: public Animal
{
private:
    string name_;
    int age_;
public:
    Cat(string name, int age);
    virtual ~Cat();
public:
    virtual void show();
};

Cat::Cat(string name, int age) : name_(name), age_(age){}

Cat::~Cat()
{
    cout << "Catクラスのデストラクタが呼び出されました" << endl;
}

void Cat::show()
{
    cout << "名前:" << name_ << " |年齢:" << age_ << "歳" << endl;
}
//----------------------

int main(void)
{
    Animal* pet1 = new Dog("ポチ",5);
    Animal* pet2 = new Cat("タマ",3);
    pet1->show();
    pet2->show();
    delete pet1;
    delete pet2;
    return 0;
}