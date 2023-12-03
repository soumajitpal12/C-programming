#include<stdio.h>
void main()
{
  int n,r,s=0;
  printf("Enter the number:");
  scanf("%d",&n);
  while(n!=0)
  {
    r= n%10;
    n=n/10;
    s=s+r;	
  }	
  printf("Sum of digit of the number is %d",s);
}
