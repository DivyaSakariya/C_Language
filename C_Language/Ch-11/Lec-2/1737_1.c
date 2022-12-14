//WAP to create infinite calc using UDF, switch case and Loop.
#include<stdio.h>
void main()
{
	int i,choice,a,b;
	do
	{
		printf("\nPress 1 for Addition.");
		printf("\nPress 2 for Subtraction.");
		printf("\nPress 3 for Multiplication.");
		printf("\nPress 4 for Division.");
		printf("\nPress 5 for Modulo.");
		printf("\nPress 0 for Exit...\n");
		
		printf("\nEnter your choice :- ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("\nEnter the value of a :- ");
				scanf("%d",&a);
				printf("Enter the value of b :- ");
				scanf("%d",&b);
				
				printf("\nAddition of %d and %d is :- %d\n",a,b,addition(a,b));
				break;
				
			case 2:
				printf("\nEnter the value of a :- ");
				scanf("%d",&a);
				printf("Enter the value of b :- ");
				scanf("%d",&b);
				
				printf("\nSubtraction of %d and %d is :- %d\n",a,b,subtraction(a,b));
				break;
					
			case 3:
				printf("\nEnter the value of a :- ");
				scanf("%d",&a);
				printf("Enter the value of b :- ");
				scanf("%d",&b);
				
				printf("\nMultiplication of %d and %d is :- %d\n",a,b,multiplication(a,b));
				break;
				
			case 4:
				printf("\nEnter the value of a :- ");
				scanf("%d",&a);
				printf("Enter the value of b :- ");
				scanf("%d",&b);
				
				printf("\nDivision of %d and %d is :- %d\n",a,b,division(a,b));
				break;
				
			case 5:
				printf("\nEnter the value of a :- ");
				scanf("%d",&a);
				printf("Enter the value of b :- ");
				scanf("%d",&b);
				
				printf("\nModulo of %d and %d is :- %d\n",a,b,modulo(a,b));
				break;
				
			case 0:
				break;
				
			default:
				printf("\nInvalid choice...");
				break;
		}
	}while(choice!=0);
}

int addition(int a, int b)
{
	return a+b;
}

int subtraction(int a, int b)
{
	return a-b;
}

int multiplication(int a, int b)
{
	return a*b;
}

int division(int a, int b)
{
	return a/b;
}

int modulo(int a, int b)
{
	return a%b;
}