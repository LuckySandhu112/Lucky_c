#include <iostream>

class A
{
    public:
    void get()
    {
        std::cout<<"Endavour ";
    }
};
class B
{
    public:
    void put()
    {
        std::cout<<"Fortuner ";
    }
};
class C
{
    public:
    void show()
    {
        std::cout<<"BMW\n";
    }
};
class D: public A, public B, public C
{
    public:
    void P()
    {
        std::cout<<"Cars";
    }
};
int main()
{
    D L;
    L.get();
    L.put();
    L.show();
    L.P();
}
