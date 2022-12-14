//WAP to calculate the factorial of N using do while loop.
#include<stdio.h>
main()
{
	int i=1,N,fact=1;
	printf("Enter the number to find factorial : ");
	scanf("%d",&N);
	do
	{
		fact=fact*i;
		i++;	
	}	
	while(i<=N);
	printf("Factorial of %d is :- %d",N,fact);
}
