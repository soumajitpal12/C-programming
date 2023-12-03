//WACP to find the largest among three numbers.
#include<stdio.h>
#include<conio.h>
void main()
{
 int year;
 printf("Enter the year:" );
 scanf("%d",&year); 
if(year%400 ==0)
{
  printf("The Year is LEAP YEAR");
}
else if(year%4 == 0 && year%100 != 0)
{
  printf("The Year is LEAP YEAR");
}
else
 printf("The Year is Not LEAP YEAR");
getch();

}

//Output:-
//Enter the year:2012
//The Year is LEAP YEAR


