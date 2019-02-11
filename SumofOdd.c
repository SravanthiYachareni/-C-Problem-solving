// Program to find the sum of odd numbers
#include<stdio.h>
void main()
{
	int n,i,s=0;
	printf("Enter value");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)
	{
		s=s+i;
	}
	printf("Sum is %d",s);
}
	

