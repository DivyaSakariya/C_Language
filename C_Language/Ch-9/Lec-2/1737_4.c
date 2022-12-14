//WAP to find peform addition of 2D array & store it into another.
#include<stdio.h>
main() 
{
	int row,col;
	printf("Enter the Rows :- ");
	scanf("%d",&row);
	printf("Enter the Columns :- ");
	scanf("%d",&col);

	int a[row][col],b[row][col],c[row][col],i,j;
	for(i=0; i<row; i++) 
	{
		for(j=0; j<col; j++) 
		{
			printf("Enter a[%d][%d] of 1st 2D array:- ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<row; i++) 
	{
		for(j=0; j<col; j++) 
		{
			printf("Enter a[%d][%d] of 2nd 2D array:- ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0; i<row; i++) 
	{
		for(j=0; j<col; j++) 
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\nThe sum of two matrices a and b is :-\n");
	for(i=0; i<row; i++) 
	{
		for(j=0; j<col; j++) 
		{
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
}