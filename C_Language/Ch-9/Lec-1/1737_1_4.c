//WAP to find perform addition of 1D array & store it into another.
#include<stdio.h>
main()
{
	int n;
	printf("Enter the size of an Array : ");
	scanf("%d",&n);	
	
	int a[n],b[n],c[n],i;
	for(i=0;i<n;i++)
	{
		printf("Enter the elements of 1st array : ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("Enter the elements of 2nd array : ");
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
		printf("\nSum of two Array is :- %d",c[i]);
	}
}
