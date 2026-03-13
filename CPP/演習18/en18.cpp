#include <iostream>
using namespace std;

class Counter
{
private:
    int num;
public:
    Counter();
public:
    int Getter();
    void Setter(const int value);
};

Counter::Counter()
{
    num = 0;
}

int Counter::Getter()
{
    return num;
}

void Counter::Setter(const int value)
{
    num = value;
}

int main(void)
{
    Counter counter[3];     
    for(int i = 0; i < 3; i++)
    {
        cout << counter[i].Getter() <<  endl; 
    }
        return 0;
}