#include <iostream>
using namespace std;

class Counter
{
private:
    int num;
public:
    Counter();
    Counter(int num1);
public:
    int Getter();
    void Setter(const int value);
};

//コンストラクタのオーバーロード
Counter::Counter()
{
    num = 0;
}
Counter::Counter(int num1)
{
    num = num1;
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
    Counter counter1; 
    Counter counter2(30);    
    cout << counter1.Getter() << " : " << counter2.Getter() << endl; 
    return 0;
}