// Program to print  greatest of three values
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter values");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("a is greatest");
	}
	else if(b>c&&b>a)
	{
		printf("b is greatest");
	}
	else 
	{
		printf("c is greatest");
	}
	
}
