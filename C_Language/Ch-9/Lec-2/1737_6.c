//WAP to perform coulmn-wise sum of 2D array.
#include<stdio.h>
main()
{
	int r,c;
	printf("Enter the Rows :- ");
	scanf("%d",&r);
	printf("Enter the Columns :- ");
	scanf("%d",&c);
	
	int a[r][c],i,j,sum=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{			
			printf("Enter a[%d][%d] :- ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0; i<r; i++) 
	{
		for(j=0; j<c; j++) 
		{
			sum = sum + a[j][i];
		}
		printf("\nSum of column of 2D array is :- %d",sum);
	}
}