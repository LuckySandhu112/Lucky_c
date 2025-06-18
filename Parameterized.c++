#include <iostream>

class student
{
	int a, b;
	public:
		student (int x, int y)
		{
			a=x;
			b=y;
		}
		void show()
		{
			std::cout<<a+b;
		}
};
int main()
{
	student S(10,20);
	S.show();
}
