//WAP to print even number from N to 1 using do while loop.
#include<stdio.h>
main()
{
	int i=1,N;
	printf("Enter the first number : ");
	scanf("%d",&N);
	do
	{
		if(N%2==0)
		{
			printf("%d\n",N);
		}
		N--;
	}
	while(N>=i);
}
