#include <iostream>

using namespace std;
class Animal
{
    public:
    virtual void sound()
    {
        cout<<"This is an Animal";
    }
};
class Dog: public Animal
{
    public:
    void sound()
    {
        cout<<"Woof Woof ";
    }
};
class Cat : public Animal 
{
    public:
    void sound()
    {
        cout<<"Meow Meow";
    }
};
int main()
{
    Animal* animalPtr;
    Dog dog;
    Cat cat;
    
    animalPtr = &dog;
    animalPtr->sound();
    
    animalPtr = &cat;
    animalPtr->sound();
    
    return 0;
}
