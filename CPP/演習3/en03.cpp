#include <iostream>
using namespace std;

int main (void)
{
    int num1,num2,res = 0;
    cout << "１つ目の数字を入力して下さい" << endl;
    cin >> num1; 
    cout << "２つ目の数字を入力して下さい" << endl;
    cin >> num2;  
    res = num1 + num2;
    cout <<"結果は" << res << "です。" << endl;
    
    return 0;
}