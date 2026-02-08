//#include<stdio.h>
//int main()
//{
//	int a;
//	switch()
//	{
//		default:
//        	printf("Default value");
////		case 1:
////			printf("Hello");
////		case 2:
////			printf("Hii");
//        case 2:
//        	printf("Hii");
//        	break;
//        case 1:
//        	printf("Hello");
//        	break;
//        case 4:
//        	printf("Hello 4\n")
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	char a;
//	scanf("%c", &a);
//	switch(a)
//	{
//		default:
//        	printf("wrong choice \n");
////		case 1:
////			printf("Hello");
////		case 2:
////			printf("Hii");
//        case 'a':
//        	printf("%c", a);
//        	break;
//        case 'b':
//        	printf("%c", a);
//        	break;
//        case 'c':
//        	printf("%c", a);
//        	break;
//	}
//	return 0;










//#include<stdio.h>
//int main()
//{
//    int a = 10, b = 20;
//    if(a>b)
//    {
//	    printf("Hello");
//	    break;
//    }
//}




#include<stdio.h>
int main()
{
	int a, b;
	char c;
	printf("Enter the value of a and b\n");
	scanf("%d%d", &a, &b);
	printf("Operation you want to perform * + - / %\n");
	scanf(" %c", &c);
	switch(c)
	{
		case '+':
			printf("The addition of Number = \n%d", a + b);
			break;
		case '-':
			printf("The subtraction of Numbers = \n%d", a - b);
			break;
		case '*':
			printf("The Multiplication of Numbers = \n%d", a / b);
			break;
		case '%':
			if(b!=0)
			printf("The modulus of Numbers = \n%d", a % b);
			else
			printf("You can't divide by 0'");
			break;
		case '/':
			if(b!=0)
			printf("The modulus of Numbers = \n%d", a / b);
			else
			printf("You can't divide by 0'");
			break;
		default:
			printf("Wrong decision \n");
	}
}










