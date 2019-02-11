// Program to print quadrant position of  a point  using nested if else
#include<stdio.h>
void main()
{
	int x,y;
	printf("Enter values");
	scanf("%d %d",&x,&y);
	if(x>0)
	{
		if(y>0)
		{
			printf("Q1");
		}
		else if(y<0)
		{
			printf("Q4");
			
		}
		else
		{
			printf("Y-axis");
		}
	}
	else if(x<0)
	{
		if(y>0)
		{
			printf("Q2");
		}
		else if(y>0)
		{
			printf("Q3");
			
		}
		else
		{
			printf("x-axis");
		}
	}
		else
		{
			if(y==0)
			{
				printf("Origin");
			}
			else
			{
				printf("Y-axis");
			}
		}
	}
	

