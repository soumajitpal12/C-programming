#include<stdio.h>
#include<conio.h>
void main()
{
 int fact(int x);
 int n,r,f1,f2,f3,ncr,npr;
 printf("Enter the value of n and r:\n");
 scanf("%d%d",&n,&r);
 f1= fact(n);
 f2= fact(r);
 f3= fact(n-r);
 ncr = f1/(f2*f3);
 npr = f1/f3;
 printf("\nNCR is %d",ncr);
 printf("\nNPR is %d",npr);
}
int fact(int n)
{
 int f=1,i;
 for(i=1;i<=n;i++)
 f=f*i;
 return f;

}
