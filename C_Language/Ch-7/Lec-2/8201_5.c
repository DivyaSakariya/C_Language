//WAP to print odd number from 1 to N using do while loop.
#include<stdio.h>
main()
{
	int i=1,N;
	printf("Enter the last number : ");
	scanf("%d",&N);
	do
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
		}
		i++;
	}
	while(i<=N);
}
