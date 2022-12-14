//WAP to calculate the factorial of N using for loop.
#include<stdio.h>
main()
{
	int i,N,fact=1;
	printf("Enter the number to find factorial : ");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		fact=fact*i;	
	}	
	printf("Factorial of %d is :- %d",N,fact);
}
