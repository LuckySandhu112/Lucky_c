#include <iostream>

class A
{
    public:
    void get()
    {
        std::cout<<"Cars\n";
    }
};
class B: public A
{
    public:
    void put()
    {
        std::cout<<"BMW ";
    }
};
class C
{
    public:
    void show()
    {
        std::cout<<"Truck\n";
    }
};
class D: public B, public C
{
    public:
    void P()
    {
        std::cout<<"Vehicles";
    }
};
int main()
{
    D K;
    K.get();
    K.put();
    K.show();
    K.P();
}
