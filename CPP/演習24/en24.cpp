#include <iostream>
using namespace std;

class comparison
{
private:
    int num_;
public:
    comparison(int num);
public:
    bool operator ==(const comparison& rother) const;
};

comparison::comparison(int num):num_(num){};

bool comparison::operator ==(const comparison& rother) const
{
    if(num_ == rother.num_)
    {
        return true;
    }
    return false;
}

int main(void)
{       
    comparison com1(10);
    comparison com2(10);
    if(com1 == com2)
    {
        cout << "等しい" << endl;
    }
    else
    {
        cout << "等しくない" << endl;
    }
    return 0;
}