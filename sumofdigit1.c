#include<stdio.h>
#include<conio.h>
void main()
{
  int n,a,i,s=0;
  printf("enter the number: ");
  scanf("%d",&n);
  while(n!= 0)
  {
    a=n%10;
    s=s+a;
    n=n/10;
  }
  printf("sum of the digit of a number: %d",s);
  getch();
}
