#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[20];
	char str2[20];
	printf("\nEnter the string: ");
	scanf("%s",str);
	strcpy(str2,str);
	printf("After Copy: Hello ");
	puts(str2);
	getch();
}
