#include <iostream>
using namespace std;

class test
{
private:
    int* data_;
public:
    test(int value);
    test(const test& other);
    ~test();
public:
    void show();
};

test::test(int num)
{
    data_ = new int(num);
}

test::test(const test& other)
{
    data_ = new int(*other.data_);
    cout << "コピー！" << endl;
}

test::~test() 
{
    delete data_;
}

void test::show()
{
    cout << "値 " << *data_  << "   アドレス " << data_ << endl;
}

int main(void)
{
    test test1(30);
    test test2 = test1;
    test1.show();
    test2.show();
    return 0;
}