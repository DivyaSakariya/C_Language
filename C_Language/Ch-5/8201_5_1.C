//WAP to find the answer given formula (x+y)^2.
#include<stdio.h>
#include<conio.h>
main()
{
   int x, y, ans;
   clrscr();
   printf("Enter the value of x : ");
   scanf("%d",&x);
   printf("Enter the value of y : ");
   scanf("%d",&y);

   ans = (x*x)+(2*x*y)+y*y;

   printf("\nAnswer is :- %d",ans);
   getch();
}