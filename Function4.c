#include <stdio.h>

int get();
int main()
{
	int a;
    a=get();
    printf("%d", a);
}
int get()
{
	int x=10,y=20,c;
	c=x+y;
	return(c);
}
