//WAP to find minimum from given 3 number using nested if else.
#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    printf("Enter the value of c : ");
    scanf("%d",&c);
    if(a==b && b==c)
    {
		printf("\nAll values are same.");
    }
    else if(a==b)
    {
		printf("\nA and B are same.");
    }
    else if(a==c)
    {
		printf("\nA and C are same.");
    }
    else if(b==c)
    {
		printf("\nB and C are same.");
    }
    else
    {
	if(a<b)
	{
	    if(a<c)
	    {
			printf("\nA is minimum.");
	    }
	    else
	    {
			printf("\nC is minimum.");
	    }
	}
	else
	{
	    if(b<c)
	    {
			printf("\nB is minimum.");
	    }
	    else
	    {
			printf("\nC is minimum.");
	    }
	}
    }
}
