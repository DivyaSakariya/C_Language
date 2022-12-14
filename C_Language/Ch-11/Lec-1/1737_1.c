//1.WAP to find cube of given no using UDF.
#include<stdio.h>
main()
{
	int a;
	printf("Enter the number :- ");
	scanf("%d",&a);
	
	cube(a);
}

cube(int a)
{
	printf("\nThe cube of given number is :- %d",a*a*a);
}