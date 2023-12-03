#include <stdio.h>
#include <conio.h>
void main()
{
	int i,j,row, col, a[20][20];
	printf("Enter Row And Column Of The Matrix:: ");
	scanf("%d%d",&row, &col);
	printf("\nEnter matrix elements:: ");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	  
	}
	printf("Matrix is::\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	  
        }
}
