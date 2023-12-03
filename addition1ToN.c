#include<stdio.h>
#include<conio.h>
void main()
{
  int n,sum=0;
  printf("Enter a Range: ");
  scanf("%d",&n);
  sum = n*(n+1)/2;
  printf("\nThe Sum is: %d",sum);
  getch();
}

//OUTPUT:-
//Enter a Range: 10
//The Sum is: 55

