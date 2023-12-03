#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[50];
	char b[50];
	printf("Enter the string: ");
	scanf("%s",a);	
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b) == 0)
	{
		printf("The String is Palindrome");
	}
	
	else
	printf("\nNot Palindrome");
	getch();
}
