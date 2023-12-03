//WACP to find the largest among three numbers.
#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 printf("Enter the 1st number:" );
 scanf("%d",&a);
 printf("Enter the 2nd number:" );
 scanf("%d",&b);
 printf("Enter the 3rd number:" );
 scanf("%d",&c);  
if(a>b)
{
  if(b>c)
  {
   printf("%d is Max",a);
  }
}
else if(b>c)
{
  printf("%d is max",b);
}
else
 printf("%d is max",c);
getch();

}


