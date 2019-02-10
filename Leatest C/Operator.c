//Perform arithematic operators on two values
#include<stdio.h>
void main()
{
	char op;
	int c,b,a;
	printf("Enter a operator");
	scanf("%c",&op);
	printf("Enter values");
	scanf("%d %d",&a,&b);
	if(op=='+')
	{
		c=a+b;
		printf("%d",c);
		
	}
	else if(op=='-')
	{
		c=a-b;
		printf("%d",c);
	}
	else if(op=='*')
	{
		c=a*b;
		printf("%d",c);
	}
	else if(op=='/')
	{
		c=a/b;
		printf("%d",c);
	}
	else if(op=='%')
	{
		c=a%b;
		printf("%d",c);
	}
	else 
	{
		printf("Invalid operator");
	}
}
