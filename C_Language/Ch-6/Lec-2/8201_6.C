//WAP to find maximum from given 4 number using ternary operator.
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
    (a==b && b==c && c==d)
	? printf("\nAll values are same.")
	: (a==b && b==c)
	    ? printf("\nA, B and C are same.")
	    : (b==c && c==d)
			? printf("\nB, C and D are same.")
			: (c==d && d==a)
			    ? printf("\nC, D and A are same.")
			    : (d==a && a==b)
					? printf("\nD, A and B are same.")
					: (a==c && c==d)
					    ? printf("\nA, C and D are same.")
					    : (a==b && c==d)
					    	? printf("\nA and B are same.\nC and D are same.")
					    	: (b==c && a==d)
					    		? printf("\nB and C are same.\nA and D are same.")
					    		: (a==c && b==d)
					    			? printf("\nA and C are same.\nB and D are same.")
					    			: (a==b)
										? printf("\nA and B are same.")
										: (a==c)
										    ? printf("\nA and C are same.")
										    : (a==d)
												? printf("\nA and D are same.")
												: (b==c)
												    ? printf("\nB and C are same.")
												    : (b==d)
														? printf("\nB and D are same.")
														: (c==d)
														    ? printf("\nC and D are same.")
															    : (a>b)
																	? (a>c)
																    	? (a>d)
																    		? printf("\nA is maximum.")
																    		: 	printf("\nD is maximum.")
																   	: (c>d)
																    	? printf("\nC is maximum.")
																    	: printf("\nD is maximum.")
																: (b>c)
																    ? (b>d)
																    	? printf("\nB is maximum.")
																    	: printf("\nD is maximum.")
																: (c>d)
																	? printf("\nC is maximum.")
																	: printf("\nD is maximum.");
}
