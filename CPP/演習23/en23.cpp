#include <iostream>
using namespace std;

class Counter
{
private:
    int num_;
public:
    Counter();
public:
    int Getter();
    void Setter(const int value);
    void show();
};

Counter::Counter():num_(100){};


int Counter::Getter()
{
    return num_;
}

void Counter::Setter(const int num)
{
    num_ = num;
    show();
}

void dummy::show()
{
    cout << num_ << "で初期化しました。" << endl;
}

int main(void)
{
    Counter counter1; 
    counter1.Setter(100);  
    cout << counter1.Getter() <<  endl; 
    return 0;
}