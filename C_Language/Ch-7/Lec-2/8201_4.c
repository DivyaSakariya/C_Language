//WAP to print N to 1 using do while loop.
#include<stdio.h>
main()
{
	int N,i=1;
	printf("Enter the first number : ");
	scanf("%d",&N);
	do
	{
		printf("%d\n",N);
		N--;
	}
	while(N>=i);
}
