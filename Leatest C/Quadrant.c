// program to print the quadrant position
#include<stdio.h>
void main()
{
	int x,y;
	printf("Enter number");
	scanf("%d %d",&x,&y);
	if(x>0&&y>0)
	{
		printf("Q1");
	}
	else if(x<0&&y>0)
	{
		printf("Q2");
	}
	else if(x<0&&y<0)
	{
		printf("Q3");
	}
	else if(x>0&&y<0)
	{
		printf("Q4");
		
	}
	else if(x==0&&y!=0)
	{
		printf("X-axis");
	}
	else if(x!=0&&y==0)
	{
		printf("Y-axis");
	}
	else
	{
		printf("Origin");
	}
}
