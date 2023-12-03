#include<stdio.h>
void main(){
	int n,i,a;
	printf("Enter the range: ");
	scanf("%d",&n);
	printf("The fibonacci series is: \n");
	fibo(n);
}
void fibo(int a){
	int x=0, y=1; n, i,z;
	for(i=0;i<a;i++)
	{
		printf("%d\t",x);
		z = x+y;
		x=y;
		y= z;
	}
}
