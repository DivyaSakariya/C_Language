//WAP to print odd number from 1 to N using for loop.
#include<stdio.h>
main()
{
	int i,N;
	printf("Enter the last number : ");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
		}
	}
}
