//WAP to print sum 1 to N using while loop.
#include<stdio.h>
main()
{
    int N,i=1,sum=0;
    printf("Enter the last number : ");
    scanf("%d",&N);
    while(i<=N)
    {
		sum=sum+i;
		i++;
    }
    printf("Sum of the first %d number is : %d",N,sum);
}
