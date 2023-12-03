#include<stdio.h>
void main()
{
  int i,j;
  for(i=1;i<100;i++)
  { 
    scanf("%d",&j);
    printf("%d\n",j);
    if(j==100)
    break;
  }
}
