#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char str1[100],str2[100];
 printf("\nEnter the String:");
 scanf("%s",str1);
 strcpy(str2,str1);
 printf("\nAfter copy: Hello! ");
 puts(str2);
 
 getch();
}
