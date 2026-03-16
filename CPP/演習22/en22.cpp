#include <iostream>
using namespace std;

class copy
{
private:
    int* data_;
public:
    copy(int value);
    copy(const copy& other);
    ~copy();
public:
    void show();
};

copy::copy(int num)
{
    data_ = new int(num);
}

copy::copy(const copy& other)
{
    data_ = new int(*other.data_);
    cout << "コピー！" << endl;
}

copy::~copy() 
{
    delete data_;
}

void copy::show()
{
    cout << "値 " << *data_  << "   アドレス " << data_ << endl;
}

int main(void)
{
    copy copy1(30);
    dummy copy2 = Dummy1;
    copy1.show();
    copy2.show();
    return 0;
}