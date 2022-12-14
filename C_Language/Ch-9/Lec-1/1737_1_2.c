//WAP to find length of 1D array.
#include<stdio.h>
main()
{
	int a[8],i,count=0;
	for(i=0;i<8;i++)
	{
		printf("Enter the elements :- ");
		scanf("%d",&a[i]);
		count++;
	}
	for(i=0;i<8;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("\nLength of an Array is :- %d",count);
}
