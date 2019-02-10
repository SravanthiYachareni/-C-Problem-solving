// Program to check whether  a number is armstrong or not
#include<stdio.h>
void main()
{
	int n,s=0,m,r;
	printf("Enter number");
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		r=n%10;
		s=s+r*r*r;
		n=n/10;
	}
	if(s==m)
	printf("Armstrong");
	else
	printf("Not a armstrong");
}
