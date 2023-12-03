#include<stdio.h>
#include<conio.h>
void main()
{
  int n;
  printf("Enter the number: ");
  scanf("%d",&n);
  printf("\nThe Value of n is : %d",n);
    
    printf("\nThe Address of n is : %d",&n);
      
      printf("\nThe Address of n in integer value is : %d",&n);
   	
	   printf("\nThe Address of n in unsigned value is : %u",&n);
	   
    		printf("\nThe Address of n in hexadesimal value is : %x",&n);
		    

getch();

}

//OutPut

//Enter the number: 12
//
//The Value of n is : 12
//The Address of n is : 6487580
//The Address of n in integer value is : 6487580
//The Address of n in unsigned value is : 6487580
//The Address of n in hexadesimal value is : 62fe1c
