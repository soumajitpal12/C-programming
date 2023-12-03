#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,s=0;
	//clrscr();
	printf("Enter number:\n");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	printf("Sum of digit of the number is %d",s);
	getch();
}
