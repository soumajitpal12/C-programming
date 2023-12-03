#include<stdio.h>
#include<conio.h>
void main()
{
  float x,y;
  printf("\nEnter the x Coordinate: ");
  scanf("%f",&x);
   printf("\nEnter the y Coordinate: ");
  scanf("%f",&y);
  
    if(x>0 && y>0)
    {
      printf("\nFirst Quadrant");
    }
    else if(x<0 && y>0)
    {
      printf("\nSecond Quadrant");
    }
   else if(x<0 && y<0)
    {
      printf("\nThird Quadrant");
    }
    else if(x>0 && y<0)
    {
      printf("\nFourth Quadrant");
    }
    else if(x==0 && y==0)
    {
      printf("\nOrigin");
    }
    else
    {
      printf("\nDon't Belong to any quadrant");
    }
  
  getch();
}

//Output:-
//Enter the x Coordinate: 4
//Enter the y Coordinate: -5
//Fourth Quadrant
