// Program to find sum of first n natural number
#include<stdio.h>
void main()
{
	int n,i,s=0;
	printf("Enter value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s+i;
	}
	printf("Sum is %d",s);
}
