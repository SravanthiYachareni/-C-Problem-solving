// Write a program to read a number to print  number in words
#include<stdio.h>
void main()
{
	int m,s=0,n,r,a;
	printf("Enter values");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
		
	}
	m=s;
	
	while(m!=0)
	{
		a=m%10;
	switch(a)
	{
		case 0:printf("Zero");
		break;
		case 1:printf("One");
		break;
		case 2:printf("Two");
		break;
		case 3:printf("Three");
		break;
		case 4:printf("Four");
		break;
		case 5:printf("Five");
		break;
		case 6:printf("Six");
		break;
		case 7:printf("Seven");
		break;
		case 8:printf("Eight");
		break;
		case 9:printf("Nine");
		break;
		
	}
	m=m/10;
}
}
