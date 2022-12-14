//WAP to print odd no. from 1 to N using while loop.
#include<stdio.h>
main()
{
    int i=1,N;
    printf("Enter the ending number : ");
    scanf("%d",&N);
    while(i<=N)
    {
		if(i%2!=0)
		{
	    	printf("%d\n",i);
		}
		i++;
    }
}
