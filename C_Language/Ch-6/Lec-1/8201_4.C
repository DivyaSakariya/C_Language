//WAP to find the number is even or odd.
#include<stdio.h>
#include<conio.h>
main()
{
   int num;
   clrscr();
   printf("Enter the number : ");
   scanf("%d",&num);
   if(num<=0)
   {
      printf("This number is Invalid");
   }
   else
   {
     if(num%2==0)
     {
	printf("This number is Even.");
     }
     else
     {
	printf("This number is Odd.");
     }
   }
   getch();
}