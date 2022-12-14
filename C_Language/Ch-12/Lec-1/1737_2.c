//2.WAP to swap two variables using Pointer.
#include<stdio.h>
void main()
{
	int a,b;
	
	int *n1;
	int *n2;
	
	printf("Enter the value of a :- ");
	scanf("%d",&a);
	printf("Enter the value of b :- ");
	scanf("%d",&b);
	
	n1 = &a;
	n2 = &b;
	
	*n1 = *n1 + *n2;
	*n2 = *n1 - *n2;
	*n1 = *n1 - *n2;
	
	printf("\nAfter swaping :-");	
	printf("\nThe value of a :- %d",*n1);
	printf("\nThe value of b :- %d",*n2);
}