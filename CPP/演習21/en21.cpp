#include <iostream>
using namespace std;

class test
{
private:
    int num_;
public:
    test();
public:
    void show();
};

test::test(): num_(100){};

void test::show()
{
    cout << num_ << "で初期化しました。" << endl;
}

int main(void)
{
    test Test;
    Test.show();
    return 0;
}