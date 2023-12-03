#include<stdio.h>
#include<conio.h>
void main()
{
	char a[50];
	char *ptr;
	int n=0;
	printf("Enter the string: ");
	scanf("%s",a);
	ptr = a;
	while(*ptr!='\0')
	{
		n++;
		ptr++;
		
	}
	printf("\nString Length is:%d",n);
	getch();
}
