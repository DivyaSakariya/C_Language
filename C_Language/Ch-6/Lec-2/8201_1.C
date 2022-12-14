//WAP to find given 2 number using ternary operator.
#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	(a>b)
		?printf("\nA is maximum.")
		:printf("\nB is maximum.");
}
