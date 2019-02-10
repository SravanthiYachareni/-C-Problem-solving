// Perform arithematic operation on two values
#include<stdio.h>
void main()
{
	char ch;
	int a,b,c;
	printf("Enter character");
	scanf("%c",&ch);
	printf("enter  values");
	scanf("%d %d",&a,&b);
	if(ch='+')
	{
		c=a+b;
		printf("%d",c);
	}
	else if(ch='-')
	{
		c=a-b;
		printf("%d",c);
	}
	else if(ch='*')
	{
	c=a*b;
	printf("%d",c);
	}
	else if(ch='/')
	{
	 c=a/b;
	 printf("%d",c);
	 	}
	 	else if(ch='%')
	 	{
	 		c=a%b;
	 		printf("%d",c);
		 }
		 else
		 {
		 	printf("invalid operator");
		 }
}
