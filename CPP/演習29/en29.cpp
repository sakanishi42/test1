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
    void show();
};

Animal::Animal() : name_(""), age_(0) {}

void Animal::show()
{
    cout << "名前:" << name_ << " |年齢:" << age_ << "歳" << endl;
}

class Dog: public Animal
{
public:
    Dog(string name, int age);
    void show();
};

Dog::Dog(string name,int age)
{
    name_ = name;
    age_ = age;
}

void Dog::show()
{
    Animal::show();
}

int main(void)
{
    Dog dog("太郎",6);
    dog.show();
    return 0;
}