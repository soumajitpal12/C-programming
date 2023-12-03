#include<stdio.h>
#include<conio.h>
void main()
{
  int n,g;
  printf("Enter a Number: ");
  scanf("%d",&n);
  if(n%7 == 0)
  printf("\n%d is divisible by 7",n);
  else
  printf("\n%d is not divisible by 7",n);
  getch();
}

//OUTPUT:-
//Enter a Number: 14
//9 is divisible by 7.

