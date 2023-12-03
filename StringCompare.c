#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[50];
	char b[50];
	int n;
	printf("Enter the string: ");
	scanf("%s",a);
	printf("Enter the string: ");
	scanf("%s",b);
	n= strcmp(a,b);
	if(n==0)
	{
	 printf("Strings are Equal");
	}
	else
	printf("\nNot Equal");
	getch();
}
