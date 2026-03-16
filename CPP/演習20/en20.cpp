#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
   string name;
   int age;
public:
    Person();
    Person(string name, int age);
public:
    void show();
};

Person::Person()
{
    name = "";
    age = 0;
}

Person::Person(string Name, int Age): name(Name), age(Age){}

void Person::show()
{
    cout << "氏名 " << name << ":" << "年齢 " << age << "歳" << endl;
}

int main(void)
{
    Person p1("山田太郎",18);
    p1.show();
    return 0;
}