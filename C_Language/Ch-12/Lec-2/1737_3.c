#include<stdio.h>
void main()
{
	int n;
	printf("Enter the size of array :- ");
	scanf("%d",&n);
	
	int a[n];
	int *ptr[n];
	int i;
	int ans;
	
	for(i=0;i<n;i++)
	{
		printf("Enter the elements of a[%d] :- ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		ptr[i] = &a[i];
	}
	
	ans=temp(ptr,n); 
	printf("The sum of array elements :- %d",ans);
}

temp(int *ptr[100],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum = sum + *ptr[i];
	}
	return sum;
}