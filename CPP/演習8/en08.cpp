#include <iostream>
using namespace std;

int main(void)
{
    int a = 0;
    int& p = a;
    p = 140;
    cout << a << endl;
    return 0;
}