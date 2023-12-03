#include <stdio.h>
 
int main()
{
   int row1, col1, row2, col2, i, j, first[10][10], second[10][10], sub[10][10];
 
   printf("Enter the number of rows and columns of 1st matrix\n");
   scanf("%d%d", &row1, &col1);
    printf("Enter the number of rows and columns of 2nd matrix\n");
   scanf("%d%d", &row2, &col2);
   if(row1 == row2 && col1 == col2)
   {
   	printf("\n Matrix Substraction is possible\n");
   	printf("\nEnter the elements of first matrix\n");
 
   for (i = 0; i < row1; i++)
      for (j = 0; j < col1; j++)
         scanf("%d", &first[i][j]);
 
   printf("Enter the elements of second matrix\n");
 
   for (i = 0; i < row2; i++)
      for (j = 0 ; j < col2; j++)
         scanf("%d", &second[i][j]);
   
   printf("Sub of entered matrices:-\n");
   
   for (i = 0; i < row1; i++) {
      for (j = 0 ; j < col2; j++) {
         sub[i][j] = first[i][j] - second[i][j];
         printf("%d\t", sub[i][j]);
      }
      printf("\n");
   }
   	
   
}
else{
   	printf("Substracton is not possible");
   }
   
 
   return 0;
}
