#include <iostream>
class student
{
	public:
		student()
		{
			std::cout<<"Hello"<<"\n";
		}
		student(int x)
		{
			std::cout<<x+x<<"\n";
		}
		student(int x, int y)
		{
			std::cout<<x+y;
		}
};
int main()
{
	student S;
	student(10,20);
	student(20);
}
