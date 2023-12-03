#include<stdio.h>
#include<conio.h>
void main()
{
	int m,n,sum=0,i=0;
	//clrscr();
	printf("Enter the value of m:\n");
	scanf("%d",&m);
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+2){
	i=m;
	if(m%2==1){
		sum = sum+m;
		m=m+2;
	}
}
	printf("Sum of odd of m to n number is %d",sum);
	getch();
}
