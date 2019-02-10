//Program to check whether number invalid or not
#include<stdio.h>
void main()
{
	int n;
	printf("Enter number");
	scanf("%d",&n);
	if(n<0||n>100)
    
    {
    	printf("Invalid");
	}
	else
	{
		printf("Valid");
	}
}
