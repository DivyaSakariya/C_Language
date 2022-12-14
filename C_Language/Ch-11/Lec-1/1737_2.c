//2.WAP to find if a given nunmber is divisible by 3 & 5 both or not by using UDF.
#include<stdio.h>
main()
{
	int a;
	printf("Enter the number :- ");
	scanf("%d",&a);
	
	div(a);
}

div(int a)
{
	if(a%3==0 && a%5==0)
	{
		printf("\n%d is divisible by 3 and 5.");
	}
	else
	{
		printf("\n%d is not divisible by 3 and 5.");
	}
}