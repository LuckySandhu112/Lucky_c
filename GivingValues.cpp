#include <iostream>

int main()
{
    int a=10,*b,**c;
    b=&a, c=&b;
    std:: cout<<a<<std::endl<<*b<<std::endl<<**c<<std::endl;
}
