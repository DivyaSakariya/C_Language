//WAP to print sum of 1 to N using for loop.
#include<stdio.h>
main()
{
	int i=1,N,sum=0;
	printf("Enter the last number : ");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		sum=sum+i;
	}
	printf("Sum :- %d",sum);
}
