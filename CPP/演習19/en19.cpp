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

void Counter::Setter(const int num)
{
    this->num = num;
}

int main(void)
{
    Counter counter1; 
    counter1.Setter(100);  
    cout << counter1.Getter() <<  endl; 
    return 0;
}