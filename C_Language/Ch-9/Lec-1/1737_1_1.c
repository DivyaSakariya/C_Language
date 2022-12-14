//WAP to get & print 1D array of N elements.
#include<stdio.h>
main()
{
	int n;
	printf("Enter the size of Array :- ");
	scanf("%d",&n);
	
	int a[n],i;
	for(i=0;i<n;i++)
	{
		printf("Enter the elements : ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}