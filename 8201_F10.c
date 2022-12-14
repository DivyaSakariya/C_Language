//WAP to print the multiplication table of N using for loop.
#include<stdio.h>
main()
{
	int i,N,ans;
    printf("Enter the number : ");
    scanf("%d",&N);
    for(i=1;i<=10;i++)
    {
		ans=N*i;
	 	printf("%d x %d = %d\n",N,i,ans);
	}
}
