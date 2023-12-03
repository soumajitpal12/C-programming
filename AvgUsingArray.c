#include<stdio.h>
void main()
{
  float avg,sum=0;
  int n,i,a[100];
  printf("\nEnter the number:: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("Enter the element:: ");
    scanf("%d",&a[i]);
    sum = sum+a[i];
  }
//  for(i=0;i<n;i++)
//  {
//    sum = sum+a[i];
//  }
  avg = sum/n;
  
  printf("\nThe avg: %f",avg);
  getch();
}

//output:-
//Enter the number:: 5
//Enter the element:: 78
//Enter the element:: 76
//Enter the element:: 90
//Enter the element:: 85
//Enter the element:: 92
//
//The avg: 84.199997
