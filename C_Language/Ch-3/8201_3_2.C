//WAP to swap two variables without using three variables.
#include<stdio.h>
#include<conio.h>
main()
{
   int a, b;
   clrscr();
   printf("Enter the value of a : ");
   scanf("%d",&a);
   printf("Enter the value of b : ");
   scanf("%d",&b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("\nAfter swapping two variables a and b : \n");
   printf("The value of a : %d\n",a);
   printf("The value of b : %d",b);
   getch();
}