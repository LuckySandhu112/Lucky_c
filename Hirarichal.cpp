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
        std::cout<<"Car\n";
    }
};
class C: public A
{
    public:
    void show()
    {
        std::cout<<"Bike\n";
    }
};
int main()
{
    B K;
    C M;
    K.get();
    K.put();
    M.get();
    M.show();
}
