//WAP to perform cross-diagonal sum of 2D array.
#include<stdio.h>
main()
{
	int n;
	printf("Enter the Rows and Columns :- ");
	scanf("%d",&n);
	
	int a[n][n],i,j,sum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{			
			printf("Enter a[%d][%d] :- ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{			
			if(i==j || i+j==n-1)
			{
				printf("%d",a[i][j]);
				sum=sum+a[i][j];
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\nSum of Diagonal elements of 2D array :- %d",sum);
}