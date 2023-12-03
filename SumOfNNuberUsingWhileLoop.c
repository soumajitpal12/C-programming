#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,i=1;
	//clrscr();
	printf("Enter number:\n");
	scanf("%d",&n);
	while(i<=n){
		sum = sum+i;
		i++;
	}
	printf("Sum of %d number is %d",n,sum);
	getch();
}
