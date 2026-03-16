#include <iostream>
using namespace std;

struct dummy 
{
    char name[20];
    int age;
};

void Print(const dummy& arg) 
{
    cout << "氏名: " << arg.name << "| 年齢: " << arg.age << endl;
}

int main() 
{
    dummy Dummy = {"山田太郎", 20};
    Print(Dummy);
    return 0;
}