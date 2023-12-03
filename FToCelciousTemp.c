#include<stdio.h>
#include<conio.h>
void main()
{
  float c,f;
  printf("Enter Fahrenheite temp: ");
  scanf("%f",&f);
  c=(5*(f-32))/9;
  
  printf("Celcious temp is:%f",c);
  getch();
}
