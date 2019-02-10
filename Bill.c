// Write a program to calculate the bill paid by the customer based on the time paid by the customer 
//             house hold                 commerical 
 //   1-100    4.25/-                       5.75/-
 // 101-200     5.35/-                      6.45/-
 // 201-400     6.50/-                      7.85/-
  // >400       8.25/-                      10.45/-     
#include<stdio.h>
void main()
{
	int nou;
	char type;
	float bill;
	printf("Enter type");
	scanf("%c",&type);
	printf("Enter number of units");
	scanf("%d",&nou);
	switch(type)
	{
	
	case 'h':	if(nou>=1&&nou<101)
		
			bill=nou*4.25;
		
		else if(nou>=101&&nou<201)
		
			bill=bill*nou;
		
		else if(nou>=201&&nou<401)
		
			bill=6.50*nou;
		
		else
		
			bill=nou*8.25;
			printf("Bill is %f",bill);
		
		break;
		case 'c':
			if(nou>0&&nou<101)
			
				bill=nou*5.75;
          else if(nou>100&&nou<201)
		  bill=nou*6.45;
		  else if (nou>200&&nou<401)
		  bill=nou*7.85;
		  else
		  bill=nou*10.25;
		  printf("Bill is %f",bill);
		  break;
		  default:printf("Invalid");			
}
}
