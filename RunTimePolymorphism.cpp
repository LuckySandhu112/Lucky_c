#include <iostream>
using namespace std;

class Animal
{
	public:
		virtual void sound() = 0;
		
		virtual void move()
		{
			cout<<"Animal can move ";
		}
};
class Dog: public Animal
{
	public:
		void sound()
		{
			cout<<"Woof Woof ";
		}
		void move()
		{
			cout<<"Dog runs ";
		}
};

class Cat: public Animal
{
	public:
		void sound()
		{
			cout<<"Meow Meow ";
		}
		void move()
		{
			cout<<"Cat walks ";
		}
};
int main()
{
	Animal* animalPtr;
	
	Dog dog;
	Cat cat;
	animalPtr = &dog;
	animalPtr->sound();
	animalPtr->move();
	
	animalPtr = &cat;
	animalPtr->sound();
	animalPtr->move();
	
	return 0;
}
