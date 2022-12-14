//WAP to get & print 2D array of N elements.
#include<stdio.h>
main()
{
	int r,c;
	printf("Enter the Rows :- ");
	scanf("%d",&r);
	printf("Enter the Columns :- ");
	scanf("%d",&c);
	
	int a[r][c],i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter a[%d][%d] :- ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}