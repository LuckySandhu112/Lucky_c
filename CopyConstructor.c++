#include <iostream>
using namespace std;

class A
{
    public:
        int x;
};

int main()
{
    A a1;
    a1.x = 10;
    cout << "a1's x = " << a1.x<<"\n";

    A a2(a1);
    cout << "a2's x = " << a2.x;

    return 0;
}
