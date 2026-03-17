#include <iostream>
using namespace std;

class sum_obj
{
private:
    int num_;
public:
    sum_obj(int num);
public:
    int Getter() const;
    sum_obj operator +(const sum_obj& rother) const;
};

sum_obj::sum_obj(int num):num_(num){};

int sum_obj::Getter() const
{
    return num_;
}

sum_obj sum_obj::operator +(const sum_obj& rother) const
{
    return sum_obj(num_ + rother.num_);
}

int main(void)
{       
    sum_obj sum1(10);
    sum_obj sum2(20);
    
    sum_obj sum3(sum1 + sum2);

    cout << sum3.Getter() << endl;
    
    return 0;
}