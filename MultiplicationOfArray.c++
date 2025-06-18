#include <iostream>

int main()
{
	int a[5], b[5], c[5], i;
	for(i=1;i<=5;i++)
	{
	    std::cin>>a[i];
    }
    for(i=1;i<=5;i++)
    {
    	std::cin>>b[i];
	}
    for(i=1;i<=5;i++)
	{	
		c[i]=a[i]+b[i];
		std::cout<<c[i]<<"\n";
	}
}
