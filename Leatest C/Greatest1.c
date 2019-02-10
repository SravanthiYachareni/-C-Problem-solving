// Greatest of two values using conditional operators
#include<stdio.h>
void main()
{
	int a,b,c,d,e;
	printf("Enter values");
	scanf("%d %d %d",&a,&b,&c);
	e=c>(d=a>b?a:b)?c:d;
	printf("%d",e);
}
