//1.WAP to find square of each element using Pointer.
#include<stdio.h>
void main()
{
	int a;
	
	int *sqr;
	int *n;
	
	printf("Enter any value :- ");
	scanf("%d",&a);
	
	n = &a;
	*sqr = *n * *n;
	
	printf("\nSquare root of %d is :- %d",a,*sqr);
}