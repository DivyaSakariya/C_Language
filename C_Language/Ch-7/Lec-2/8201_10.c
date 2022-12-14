//WAP to print the multiplication table of N using do while loop.
#include<stdio.h>
main()
{
	int i=1,N,ans;
    printf("Enter the number : ");
    scanf("%d",&N);
    do
    {
		ans=N*i;
	 	printf("%d x %d = %d\n",N,i,ans);
	 	i++;
    }
    while(i<=10);
}
