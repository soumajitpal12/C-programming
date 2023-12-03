#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[20];
	char str2[20];
	printf("\nEnter 1st string: ");
	scanf("%s",str1);
	printf("\nEnter 2nd string: ");
	scanf("%s",str2);
	strcat(str1,str2);
	puts(str1);
	puts(str2);
	getch();
}
