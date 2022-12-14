//WAP to print 1 to N using do while loop.
#include<stdio.h>
main()
{
	int N,i=1;
	printf("Enter the last number : ");
	scanf("%d",&N);
	do
	{
		printf("%d\n",i);
		i++;
	}
	while(i<=N);
}
