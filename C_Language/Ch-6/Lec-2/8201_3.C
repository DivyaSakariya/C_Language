//WAP to find maximum from given 4 number using nested if else.
#include<stdio.h>
main()
{
    int a,b,c,d;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    printf("Enter the value of c : ");
    scanf("%d",&c);
    printf("Enter the value of d : ");
    scanf("%d",&d);
    if(a==b && b==c && c==d)
    {
		printf("\nAll values are same.");
    }
    else if(a==b && b==c)
    {
		printf("\nA, B and C are same.");
    }
    else if(b==c && c==d)
    {
		printf("\nB, C and D are same.");
    }
    else if(c==d && d==a)
    {
		printf("\nC, D and A are same.");
    }
    else if(d==a && a==b)
    {
		printf("\nD, A and B are same.");
    }
    else if(a==c && c==d)
    {
		printf("\nA, C and D are same.");
    }
    else if(a==b && c==d)
    {
		printf("\nA and B are same.");
		printf("\nC and D are same.");
    }
    else if(b==c && a==d)
    {
		printf("\nB and C are same.");
		printf("\nA and D are same.");
    }
    else if(a==c && b==d)
    {
		printf("\nA and C are same.");
		printf("\nB and D are same.");
    }
    else if(a==b)
    {
		printf("\nA and B are same.");
    }
    else if(a==c)
    {
		printf("\nA and C are same.");
    }
    else if(a==d)
    {
		printf("\nA and D are same.");
    }
    else if(b==c)
    {
		printf("\nB and C are same.");
    }
    else if(b==d)
    {
		printf("\nB and D are same.");
    }
    else if(c==d)
    {
		printf("\nC and D are same.");
    }
    else
    {
		if(a>b)
		{
		    if(a>c)
		    {
				if(a>d)
				{
			    	printf("\nA is maximum.");
				}
				else
				{
			    	printf("\nD is maximum.");
				}
		    }
		    else
		    {
			 	if(c>d)
				{
			    	printf("\nC is maximum.");
				}
				else
				{
			    	printf("\nD is maximum.");
				}
		    }
		}
		else
		{
		    if(b>c)
		    {
				if(b>d)
				{
			    	printf("\nB is maximum.");
				}
				else
				{
			    	printf("\nD is maximum.");
				}
		    }
		    else
		    {
				if(c>d)
				{
			    	printf("\nC is maximum.");
				}
				else
				{
			    	printf("\nD is maximum.");
				}
		    }
		}
    }
}
