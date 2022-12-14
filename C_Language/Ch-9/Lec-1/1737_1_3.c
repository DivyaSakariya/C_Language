//WAP to find average of 1D array.
#include<stdio.h>
main()
{
	int n;
	printf("Enter the size of an Array : \n");
	scanf("%d",&n);	
	
	int a[n],i,sum=0;
	for(i=0;i<n;i++)
	{
		printf("Enter the elements of an array : ");
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("\nAverage of an Array is :- %d",sum/n);
}
