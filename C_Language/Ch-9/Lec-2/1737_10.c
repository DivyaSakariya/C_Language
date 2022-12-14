//WAP to print & find sum of all boundary elements of 5X5 array.
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
			if(i==0 || j==n-1 || i==n-1 ||j==0)
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
	printf("\nSum of All boundary elements of 2D array :- %d",sum);
}