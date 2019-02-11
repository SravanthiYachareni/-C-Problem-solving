// Program to check whether a number is palindrome or not
#include<stdio.h>
void main()
{
	int n,r,rev=0,m;
	printf("Enter bnumber");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(rev==m)
	
		printf("Palindrome");
	
	else
	
		printf("Not a palindrome");
	
}
