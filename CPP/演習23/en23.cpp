#include <iostream>
using namespace std;

class test
{
private:
    int num_;
public:
    test();
public:
    int Getter() const;
    void Setter(const int value);
    void show() const;
};

test::test():num_(100){};


int test::Getter() const
{
    show();
    return num_;
}

void test::Setter(const int num)
{
    num_ = num;
}

void test::show() const
{
    cout << num_ << "という値が入っています。" << endl;
}

int main(void)
{
    const test const_test; 
    const_test.Getter();
    return 0;
}