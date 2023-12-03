#include<stdio.h>
#include<conio.h>
void main()
{
 int n,r,f1=1,f2=1,f3=1,i,a,b;
 printf("Enter the value of n and r:\n");
 scanf("%d%d",&n,&r);
 //f1=1; f2=1; f3=1;
 for(i=1;i<=n;i++)
 {
  f1 = f1*i;
 }
 for(i=1;i<=r;i++)
 {
  f2=f2*i;
 }
 for(i=1;i<=(n-r);i++)
 {
  f3=f3*i;
 }
 a=f1/(f2*f3);
 b=f1/f3;
 printf("%dC%d value is:: %d",n,r,a);
 printf("\n%dP%d value is:: %d",n,r,b);
 getch();
 

}
