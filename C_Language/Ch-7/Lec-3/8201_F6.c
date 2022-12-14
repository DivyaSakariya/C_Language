//WAP to print even number from N to 1 using for loop.
#include<stdio.h>
main()
{
	int i,N;
	printf("Enter the first number : ");
	scanf("%d",&N);
	for(i=1;N>=i;N--)
	{
		if(N%2==0)
		{
			printf("%d\n",N);
		}
	}
}
