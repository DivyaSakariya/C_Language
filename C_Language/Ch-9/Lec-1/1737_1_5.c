//WAP to find perform merging of 1D array & store it into another.
#include<stdio.h>
main()
{
	int n1,n2;
	printf("Enter the size of 1st Array :- ");
	scanf("%d",&n1);
	printf("Enter the size of 2nd Array :- ");
	scanf("%d",&n2);
	
	int a[n1],b[n2],c[n1+n2],i,j;
	for(i=0;i<n1;i++)
	{
		printf("Enter the elements of 1st array : ");
		scanf("%d",&a[i]);
		c[i]=a[i];
	}
	j=i;
	for(i=0;i<n2;i++)
	{
		printf("Enter the elements of 2nd array : ");
		scanf("%d",&b[i]);
		c[j]=b[i];
		j++;
	}
	printf("\nAfter merging both array :-\n");
	for(i=0;i<j;i++)
	{
		printf("%d\n",c[i]);
	}
}