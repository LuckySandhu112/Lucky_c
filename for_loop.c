#include <stdio.h>
#include <conio.h>
//for loops
//for (initialisation,condition,increment)


//initialisation of loop will be only once
//condition will check every time

int main()
{
	int i,j;
	for(i=1;i<10;i++)
	{
		printf("hello \n");
	}
	
	int j,k;
	for(; ; )
	{
		printf("hello\n"); // infinite loop
	}
	
	int l,m
	for(l=1,l<10; );
	{
		printf("hello\n") // again infinite loop
	}
	
	int i,j;
	for(i=1;i<10;i++)
	{
		printf("current value of i=%d\n",i);
		i++;
	}
	
	//for each iteration of i all iterations of j will be executed..
	int i,j;
	for (i=1;i<5;i++)
	{
		for(j=1;j<5;j++)
		{
			printf("current value of i=%d and j=%d\n",i,j);
		}
		
	}
