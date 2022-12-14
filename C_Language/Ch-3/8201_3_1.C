//WAP to swap two variables using three variables.
#include<stdio.h>
#include<conio.h>
main()
{
   int a, b, c;
   clrscr();
   printf("Enter the value of a : ");
   scanf("%d",&a);
   printf("Enter the value of b : ");
   scanf("%d",&b);
   c = a;
   a = b;
   b = c;
   printf("\nAfter swapping the variables a and b : \n");
   printf("The value of a : %d\n",a);
   printf("The value of b : %d",b);
   getch();
}