#include<stdio.h>
#include<conio.h>
void main()
{
 int a[100],n;
 printf("Enter the number of student:: ");
 scanf("%d",&n);
 if(n>0 && n<=100)
 {
 
  if(n>=90 && n<=100)
 {
  printf("Outststanding");
 }
 else if(n>=80 && n<90)
 {
  printf("Execelent");
 }
 else if(n>=70 && n<80)
 {
  printf("A+");
 }
 else if(n>=60 && n<70)
 {
  printf("B+");
 }
 else if(n>=50 && n<60)
 {
  printf("That is not a good marks to say ");
 }	
  } 
  
  else
  printf("Invelid number");
  
 getch();
}
