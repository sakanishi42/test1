#include <iostream>
using namespace std;

struct dammy 
{
    char name[20];
    int age;
};

void Print(const dammy& arg) 
{
    cout << "氏名: " << arg.name << "| 年齢: " << arg.age << endl;
}

int main() 
{
    dammy Dammy = {"山田太郎", 20};
    Print(Dammy);
    return 0;
}