#include <iostream>
using namespace std;

class dummy
{
private:
    int num_;
public:
    dummy();
public:
    void show();
};

dummy::dummy(): num_(100){};

void dummy::show()
{
    cout << num_ << "で初期化しました。" << endl;
}

int main(void)
{
    dummy Dummy;
    Dummy.show();
    return 0;
}