#include<stdio.h>
void main()
{
 char ch;
 printf("Enter character");
 scanf("%c",&ch);
 if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
 {
 	printf("Alphabet");
 	if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
 	{
 		printf("Vowel");
	 }
	 else
	 {
	 	printf("Consonant");
	 }
	 }	
	 else if(ch>=48&&ch<=57)
	 {
	 	printf("Digit");
	 }
	 else
	 {
	 	printf("Special symbol");
	 }

}
