//WAP to print 1 to N using while loop.
#include<stdio.h>
main()
{
    int i=1,N;
    printf("Enter the last number : ");
    scanf("%d",&N);
    while(i<=N)
    {
		printf("%d\n",i);
		i++;
    }
}
