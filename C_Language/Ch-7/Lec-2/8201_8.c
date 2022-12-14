//WAP to print sum of 1 to N using do while loop.
#include<stdio.h>
main()
{
	int i=1,N,sum=0;
	printf("Enter the last number : ");
	scanf("%d",&N);
	do
	{
		sum=sum+i;
		i++;
	}
	while(i<=N);
	printf("Sum :- %d",sum);
}
