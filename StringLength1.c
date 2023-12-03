#include<stdio.h>
#include<conio.h>

void main()
{
 char a[100];
 int n=0,i;
 printf("\nEnter the String:");
 scanf("%s",a);

    for (i = 0; a[i] != '\0'; i++)
    {
      n++;
    }
    
    printf("Length of the string: %d", n);
 
 getch();
}
