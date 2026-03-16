#include <iostream>
using namespace std;

class Counter
{
private:
    int num;
public:
    Counter(int Num);
public:
    int Getter();
    void Setter(const int value);
};

Counter::Counter(int Num): num(Num)
{
    cout << "コンストラクタが呼び出されました" << endl;
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
    Counter counter[3] = {Counter(10),Counter(20),Counter(30)};     
    for(int i = 0; i < 3; i++)
    {
        cout << counter[i].Getter() <<  endl; 
    }
        return 0;
}