//WAP to print N to 1 using for loop.
#include<stdio.h>
main()
{
	int N,i;
	printf("Enter the first number : ");
	scanf("%d",&N);
	for(i=1;N>=i;N--)
	{
		printf("%d\n",N);
	}
}
