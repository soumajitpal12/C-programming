#include<stdio.h>
#include<conio.h>

void main()
{
 int array[100],search,c,n;
 //clrscr();
 printf("Enter number of elements in array:\n");
 scanf("%d",&n);
 printf("Enter the elements: ");
  for(c=0;c<n;c++)
   scanf("%d",&array[c]);
 printf("Enter a number to search \n");
 scanf("%d",&search);
  for(c=0;c<n;c++)
  {
   if(array[c]== search)
   {
    printf("%d is present at location %d \n",search,c);
    break;
   }
  }
  if(c==n)
  printf("%d is not present in the array \n");
 getch();
}
