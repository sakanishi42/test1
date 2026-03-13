#include <iostream>
using namespace std;

class Counter
{
private:
    int num;
public:
    Counter();
    ~Counter();
public:
    int Getter();
    void Setter(const int value);
};

Counter::Counter()
{
    num = 0;
}

Counter::~Counter()
{
    cout << "Destructor called" << endl;
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
    Counter counter;     
    cout << counter.Getter() <<  endl; 
    return 0;
}