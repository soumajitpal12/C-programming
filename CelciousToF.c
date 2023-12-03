#include<stdio.h>
#include<conio.h>
void main()
{
  float n,f;
  printf("Enter Celcious temp: ");
  scanf("%f",&n);
  f=(n*9/5)+32;
  
  printf("Fahrenheite temp is:%f",f);
  getch();
}
