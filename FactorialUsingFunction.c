#include<stdio.h>
#include<conio.h>
void main()
{
 int fact(int x);
 int a, f;
 printf("Enter the number:: ");
 scanf("%d",&a);
 f= fact(a);
 printf("Factorial is %d",f);
}
int fact(int a)
{
 int f=1,i;
 for(i=1;i<=a;i++)
 f=f*i;
 return f;

}
