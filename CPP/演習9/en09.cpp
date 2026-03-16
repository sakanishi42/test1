#include <iostream>
using namespace std;

int main(void)
{
    int num1 = 20;
    int num2 = 40;
    cout << num1 << ":" << num2 << endl;
    swap(num1,num2);
    cout << num1 << ":" << num2 << endl;

    return 0;
}

void swap(int& num1,int& num2)
{
    int dummy = num1;
    num1 = num2;
    num2 = dummy;
}