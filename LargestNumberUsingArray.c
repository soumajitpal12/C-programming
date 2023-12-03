#include<stdio.h>
void main()
{
  int n,i,a[100],max;
  printf("\nEnter how many element:: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("Enter the element:: ");
    scanf("%d",&a[i]);
   
  }
  max = a[0];
     for(i=0;i<n;i++)
 {
   if(a[i]>max)
  {
    max=a[i];
  }
}
  
  
  printf("\nMax: %d",max);
  getch();
}

//output:-
//
//Enter how many element:: 5
//Enter the element:: 45
//Enter the element:: 69
//Enter the element:: 56
//Enter the element:: 58
//Enter the element:: 6
//
//Max: 69

