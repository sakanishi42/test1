#include <iostream>
using namespace std;

int large_return (int ,int);

int main (void)
{
    int num1,num2,res = 0;
    cout << "１つ目の数字を入力して下さい" << endl;
    cin >> num1; 
    cout << "２つ目の数字を入力して下さい" << endl;
    cin >> num2;  

    res = large_return(num1,num2);
    if(res == 0)
    {
        cout << "２つの値は等しいです。" << endl;
    }
    else
    {
        cout << res << "のほうが大きい値です。" << endl;
    }
    return 0;
}

inline int large_return(int num1,int num2)
{
    if(num1 > num2)
    {
        return num1;
    }
    else if(num1 < num2)
    {
        return num2;
    }
    else
    {
        return 0;
    }
}