//WAP to print even no. from N to 1 using while loop.
#include<stdio.h>
main()
{
    int N,i=1;
    printf("Enter the first number : ");
    scanf("%d",&N);
    while(N>=i)
    {
	 if(N%2==0)
	 {
	     printf("%d\n",N);
	 }
	 N--;
    }
}
