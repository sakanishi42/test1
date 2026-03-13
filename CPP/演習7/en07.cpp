#include <iostream>
using namespace std;

void same(int);
void same(int,int);

int main (void)
{
    int num1 = 10;
    int num2 = 20; 

    same(num1);
    same(num1,num2);
    return 0;
}

void same(int num)
{
    cout << num << endl;
}

void same(int num1,int num2)
{
    cout << num2 << " ・ " << num1 << endl;
}