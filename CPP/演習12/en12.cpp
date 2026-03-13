#include <iostream>
using namespace std;

class Counter
{
private:
    int num;
public:
    Counter()
    {
        num = 0;
    }
public:
    int Getter()
    {
        return num;
    }
    void Setter(const int value)
    {
       num = value;
    }
};

int main(void)
{
    Counter counter;    
    counter.Setter(10);
    cout << counter.Getter() << endl; 
    return 0;
}