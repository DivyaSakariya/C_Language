//WAP to print N to 1 using while loop.
#include<stdio.h>
main()
{
    int N,i=1;
    printf("Enter the first number : ");
    scanf("%d",&N);
    while(N>=i)
    {
	printf("%d\n",N);
	N--;
    }
}
