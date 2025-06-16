#include <iostream>

int main()
{
    int a = 5, b = 10, c;
    c = a;
    a = b;
    b = c;

    std::cout<<a<<","<<b;

}
