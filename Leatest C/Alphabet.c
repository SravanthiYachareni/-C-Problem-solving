// Program to print alphabet or digit or special symbol 
#include<stdio.h>
void main()
{
	char ch;
	printf("enter character");
	scanf("%c",&ch);
	if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
	{
		printf("Alphabet");
	}
else if (ch>=48&&ch<=57)
	{
		printf("Digit");
	}
	else
	{
		printf("Special character");
	}
}

