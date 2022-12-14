//WAP to find minimum number from given two number using if else.
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
   if(a<b)
   {
      printf("a is Minimum.");
   }
   else
   {
      printf("b is Minimum.");
   }
   getch();
}