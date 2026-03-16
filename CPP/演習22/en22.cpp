#include <iostream>
using namespace std;

class dummy
{
private:
    int* data_;
public:
    dummy(int value);
    dummy(const dummy& other);
    ~dummy();
public:
    void show();
};

dummy::dummy(int num)
{
    data_ = new int(num);
}

dummy::dummy(const dummy& other)
{
    data_ = new int(*other.data_);
    cout << "コピー！" << endl;
}

dummy::~dummy() 
{
    delete data_;
}

void dummy::show()
{
    cout << "値 " << *data_  << "   アドレス " << data_ << endl;
}

int main(void)
{
    dummy Dummy1(30);
    dummy Dummy2 = Dummy1;
    Dummy1.show();
    Dummy2.show();
    return 0;
}