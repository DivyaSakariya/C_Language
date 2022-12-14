//WAP to calculate the factorial of N using while loop.
#include<stdio.h>
main()
{
    int i=1,N,fact=1;
    printf("Enter any number : ");
    scanf("%d",&N);
    while(i<=N)
    {
		fact=fact*i;
		i++;
    }
    printf("Factorial of %d is : %d",N,fact);
}
