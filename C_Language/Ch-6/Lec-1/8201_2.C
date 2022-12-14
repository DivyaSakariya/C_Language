//WAP to find if a given number is neutral or not using ladder if else.
#include<stdio.h>
#include<conio.h>
main()
{
   int num;
   clrscr();
   printf("Enter the number : ");
   scanf("%d",&num);
   if(num==0)
   {
      printf("This is Neutral number.");
   }
   else if(num>0)
   {
      printf("This is Positive number.");
   }
   else
   {
      printf("This is Negative number.");
   }
   getch();
}