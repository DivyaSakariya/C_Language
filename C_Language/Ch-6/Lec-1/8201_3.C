//WAP to find you can vote or not.
#include<stdio.h>
#include<conio.h>
main()
{
   int age;
   clrscr();
   printf("Enter your age : ");
   scanf("%d",&age);
   if(age<=0)
   {
      printf("This is Invalid Choice...");
   }
   else
   {
      if(age>=18 && age<=60)
      {
	 printf("You can Vote.");
      }
      else
      {
	 printf("You cann't Vote.");
      }
   }
   getch();
}