#include <iostream>
#include <string>
using namespace std;

class Animal
{
private:
    string name_;
    int age_;
public:
    Animal(string name, int age);
    void show();
};

Animal::Animal(string name, int age): name_(name), age_(age){};

void Animal::show()
{
    cout << "名前:" << name_ << " |年齢:" << age_ << "歳" << endl;
}

class Dog: public Animal
{
public:
    Dog(string name, int age) : Animal(name, age) {}
};

int main(void)
{
    Dog dog("太郎",6);
    dog.show();
    return 0;
}