#include<stdio.h>
#include<conio.h>
void main()
{
  int m;
  printf("\nEnter the number of a student: ");
  scanf("%d",&m);
  if(m>=0 && m<=100)
  {
    if(m>=90 && m<=100)
    {
      printf("Outstanding");
    }
    else if(m>=80 && m< 90)
    {
      printf("Excellent");
    }
    else if(m>=70 && m< 80)
    {
      printf("A+ grade");
    }
    else if(m>=60 && m<= 70)
    {
      printf("A grade");
    }
    else if(m>=50 && m< 60)
    {
      printf("B+ grade");
    }
    else if(m>=40 && m< 50)
    {
      printf("B grade");
    }
    else if(m>=30 && m< 40)
    {
      printf("Pass");
    }
    else
    {
      printf("Fail");
    }
  }
  else
  {
    printf("Please Enter a valid number.");
  }
  getch();
}

//Output:-
//
//Enter the number of a student: 70
//A+ grade
