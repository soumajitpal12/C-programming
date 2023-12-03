//Bubble Sorting 

#include<stdio.h>
#include<conio.h>
void main()
{
 int a[30],s,i,j,n;
 printf("Enter how many elements:: ");
 scanf("%d",&n);
 printf("Enter the elements:: ");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n-1;i++)
 for(j=0;j<n-i-1;j++)
 if(a[j]>a[j+1])
 {
  s=a[j];
 a[j]=a[j+1];
 a[j+1]=s;
 }
 
 printf("\nSorted array is::\n");
 for(i=0;i<n;i++)
 printf("%d ",a[i]);
 
   getch();
}


//Output:
//Enter how many elements:: 5
//Enter the elements:: 1 5 6 9 8
//
//Sorted array is::
//1 5 6 8 9
