// GCD of two values
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter  number");
	scanf("%d %d",&a,&b);
	while(a!=0)
	{
		c=b%a;
		b=a;
		a=c;
	}
	printf("%d",b);
}
