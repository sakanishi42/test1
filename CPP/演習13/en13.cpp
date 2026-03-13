#include <iostream>
using namespace std;

class Counter
{
private:
    int num;
public:
    int Getter();
    void Setter(const int value);
};

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
    Counter counter;    
    counter.Setter(10);
    cout << counter.Getter() << endl; 
    return 0;
}