#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  int n,g;
  printf("Enter a Number: ");
  scanf("%d",&n);
  g=sqrt(n);
  if(g*g == n)
  printf("\n%d is Perfect Square.",n);
  else
  printf("\n%d is Not Perfect Square.",n);
  getch();
}

//OUTPUT:-
//Enter a Number: 9
//9 is Perfect Square.

