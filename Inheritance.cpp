#include <iostream>

class A
{
    public:
    void get()
    {
        std::cout<<"Vehicles\n";
    }
};
class B: public A
{
    public:
    void put()
    {
        std::cout<<"Cars";
    }
};
int main()
{
    B k;
    k.get();
    k.put();
}
