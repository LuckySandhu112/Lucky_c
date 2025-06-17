#include <iostream>

class abc
{
    private:
      int length;
    public:
      abc():length(0){}
      friend int printLength(abc); //friend function
};
int printLength(abc b)
{
    b.length += 10;
      return b.length;
}
int main()
{
    abc b;
    std::cout<<"Length of box: "<<printLength(b);
}
