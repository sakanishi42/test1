#include <iostream>
using namespace std;

void same(int);
void same(double);

int main (void)
{
    int num1 = 10;
    double num2 = 20; 

    same(num1);
    same(num2);
    return 0;
}

void same(int num)
{
    cout << num << endl;
}

void same(double num)
{
    cout << num << endl;
}