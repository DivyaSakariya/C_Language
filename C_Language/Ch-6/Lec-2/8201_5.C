//WAP to find maximum from given 3 number using ternary operator<
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
    (a==b && b==c)
    	? printf("\nAll values are same.")
    	: (a==b)
    		? printf("\nA and B are same.")
    	    : (a==c)
   				? printf("\nA and C are same.")
    			: (b==c)
    				? printf("\nB and C are same.")
    				: (a>b)
						? (a>c)
							? printf("\nA is maximum.") 
							: printf("\nC is maximum.")
								: (b>c)
									? printf("\nB is maximum.")
									: printf("\nC is maximum.");

}
