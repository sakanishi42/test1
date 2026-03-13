#include <iostream>
using namespace std;

int sum_number(int num1 = 0, int num2 = 0);

int main(void)
{   
    int num = 16; 
    int res = 0;

    res = sum_number(num);
    cout << num << " : " << res << endl; 
    res = sum_number(num,100);
    cout << num << " : " << res << endl; 
    

    return 0;
}


int sum_number(int num1, int num2)
{
    if (num2 == 0) 
    {
        return num1 + 10;
    }
    return num2;
}