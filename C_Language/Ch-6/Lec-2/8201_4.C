//WAP to find minimum from given 5 number using nested if else.
#include<stdio.h>
main()
{
    int a,b,c,d,e;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    printf("Enter the value of c : ");
    scanf("%d",&c);
    printf("Enter the value of d : ");
    scanf("%d",&d);
    printf("Enter the value of e : ");
    scanf("%d",&e);
    if(a==b && b==c && c==d && d==e)
    {
		printf("\nAll values are same.");
    }
    else if((a==b && b==c) && d==e)
    {
		printf("\nA, B and C are same.");
		printf("\nD and E are same.");
    }
    else if((b==c && c==d) && a==e)
    {
		printf("\nB, C and D are same.");
		printf("\nA and E are same.");
    }
    else if((c==d && d==e) && a==b)
    {
		printf("\nC, D and E are same.");
		printf("\nA and B are same.");
    }
    else if((d==e && e==a) && b==c)
    {
		printf("\nD, E and A are same.");
		printf("\nB and C are same.");
    }
    else if((e==a && a==b) && c==d)
    {
		printf("\nE, A and B are same.");
		printf("\nC and D are same.");
    }
    else if((a==c && c==e) && b==d)
    {
		printf("\nA, C and E are same.");
		printf("\nB and D are same.");
    }
    else if((b==d && d==a) && c==e)
    {
		printf("\nB, D and A are same.");
		printf("\nC and E are same.");
    }
    else if((b==c && c==e) && a==d)
    {
		printf("\nB, C and E are same.");
		printf("\nA and D are same.");
    }
    else if((c==d && d==a) && b==e)
    {
		printf("\nC, D and A are same.");
		printf("\nB and E are same.");
    }
    else if((b==d && d==e) && a==c)
    {
		printf("\nB, D and E are same.");
		printf("\nA and C are same.");
    }
    else if(a==b && c==d)
    {
    	printf("\nA and B are same.");
    	printf("\nC and D are same.");
	}
	else if(a==b && c==e)
    {
    	printf("\nA and B are same.");
    	printf("\nC and E are same.");
	}
	else if(a==b && d==e)
    {
    	printf("\nA and B are same.");
    	printf("\nD and E are same.");
	}
	else if(b==c && d==e)
    {
    	printf("\nB and C are same.");
    	printf("\nD and E are same.");
	}
	else if(b==c && a==e)
    {
    	printf("\nB and C are same.");
    	printf("\nA and E are same.");
	}
	else if(b==c && a==d)
    {
    	printf("\nB and C are same.");
    	printf("\nA and D are same.");
	}
	else if(c==d && a==e)
    {
    	printf("\nC and D are same.");
    	printf("\nA and E are same.");
	}
	else if(c==d && b==e)
    {
    	printf("\nC and D are same.");
    	printf("\nB and E are same.");
	}
	else if(d==e && a==c)
    {
    	printf("\nD and E are same.");
    	printf("\nA and C are same.");
	}
	else if(a==c && b==d)
    {
    	printf("\nA and C are same.");
    	printf("\nB and D are same.");
	}
	else if(a==c && b==e)
    {
    	printf("\nA and C are same.");
    	printf("\nB and E are same.");
	}
		else if(a==c && d==e)
    {
    	printf("\nA and C are same.");
    	printf("\nD and E are same.");
	}
	else if(b==d && c==e)
    {
    	printf("\nB and D are same.");
    	printf("\nC and E are same.");
	}
	else if(b==d && a==e)
    {
    	printf("\nB and D are same.");
    	printf("\nA and E are same.");
	}
    else if(a==b && b==c && c==d)
    {
		printf("\nA, B, C and D are same.");
    }
    else if(b==c && c==d && d==e)
    {
		printf("\nB, C, D and E are same.");
    }
    else if(c==d && d==e && e==a)
    {
		printf("\nC, D, E and A are same.");
    }
    else if(d==e && e==a && a==b)
    {
		printf("\nD, E, A and B are same.");
    }
    else if(e==a && a==b && b==c)
    {
		printf("\nE, A, B and C are same.");
    }
    else if(a==b && b==c)
    {
		printf("\nA, B and C are same.");
    }
    else if(b==c && c==d)
    {
		printf("\nB, C and D are same.");
    }
    else if(c==d && d==e)
    {
		printf("\nC, D and E are same.");
    }
    else if(d==e && e==a)
    {
		printf("\nD, E and A are same.");
    }
    else if(e==a && a==b)
    {
		printf("\nE, A and B are same.");
    }
    else if(a==c && c==e)
    {
		printf("\nA, C and E are same.");
    }
    else if(b==d && d==a)
    {
		printf("\nB, D and A are same.");
    }
    else if(b==c && c==e)
    {
		printf("\nB, C and E are same.");
    }
    else if(c==d && d==a)
    {
		printf("\nC, D and A are same.");
    }
    else if(b==d && d==e)
    {
		printf("\nB, D and E are same.");
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
    else if(a==e)
    {
		printf("\nA and E are same.");
    }
    else if(b==c)
    {
		printf("\nB and C are same.");
    }
    else if(b==d)
    {
		printf("\nB and D are same.");
    }
    else if(b==e)
    {
		printf("\nB and E are same.");
    }
    else if(c==d)
    {
		printf("\nC and D are same.");
    }
    else if(c==e)
    {
		printf("\nC and E are same.");
    }
    else if(d==e)
    {
		printf("\nD and E are same.");
    }
    else
    {
		if(a<b)
		{
		    if(a<c)
		    {
				if(a<d)
				{
				    if(a<e)
				    {
						printf("\nA is minimum.");
				    }
				    else
				    {
						printf("\nE is minimum.");
				    }
				}
				else
				{
				    if(d<e)
				    {
						printf("\nD is minimum.");
				    }
				    else
				    {
						printf("\nE is minimum.");
				    }
				}
		    }
		    else
		    {
				if(c<d)
				{
				    if(c<e)
				    {
						printf("\nC is minimum.");
				    }
				    else
				    {
						printf("\nE is minimum.");
				    }
				}
				else
				{
				    if(d<e)
				    {
						printf("\nD is minimum.");
				    }
				    else
				    {
						printf("\nE is minimum.");
				    }
				}
		    }
		}
		else
		{
		    if(b<c)
		    {
				if(b<d)
				{
				    if(b<e)
				    {
						printf("\nB is minimum.");
				    }
				    else
				    {
						printf("\nE is minimum.");
				    }
				}
				else
				{
				   if(d<e)
				    {
						printf("\nD is minimum.");
				    }
				    else
				    {
						printf("\nE is minimum.");
				    }
				}
		    }
		    else
		    {
				if(c<d)
				{
				    if(c<e)
				    {
						printf("C is minimum.");
				    }
				    else
				    {
						printf("\nE is minimum.");
				    }
				}
				else
				{
				    if(d<e)
				    {
						printf("\nD is minimum.");
				    }
				    else
				    {
						printf("\nE is minimum.");
				    }
				}
		    }
		}
    }
}
