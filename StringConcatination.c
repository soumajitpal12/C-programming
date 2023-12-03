#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char str1[100],str2[100];
 printf("\nEnter 1st String:");
 gets(str1);
 printf("\nEnter 2nd string:");
 gets(str2);
 strcat(str1,str2);
 puts(str1);
 getch();
}
