//WAP to find multiplication table of N using while loop.
#include<stdio.h>
main()
{
    int n,i=1,l,ans;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Enter the last number : ");
    scanf("%d",&l);
    while(i<=l)
    {
	ans=n*i;
	printf("%d x %d = %d\n",n,i,ans);
	i++;
    }
}
