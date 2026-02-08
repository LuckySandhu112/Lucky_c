#include<stdio.h>
int main()
{
	int i,j;
	for (i=1;i<10;i++)
	{
		for(j=1;j<10;j++)
		{
			if(i%2==0)
			continue;
			if(i%5==0)
			break;
			printf("current value of i=%d and j=%d\n",i,j);
		}
		getch();
		
    }
return 0;
}

/*
int main()
{
	int i,j;
	for (i=1;i<10;i++)
	{
		for(i=1;i<10;i++)
		{
			if(i%2==0)
			continue;
			if(i%5==0)
			break;
			printf("current value of i=%d and i=%d\n",i,i);
		}
    }
return 0;
}*/
