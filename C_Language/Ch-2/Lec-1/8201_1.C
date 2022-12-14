//WAP to perform all arithmetic operator such as +, -, *, /, %
#include<stdio.h>
#include<conio.h>
main()
{
   int a;
   int b;
   int c;
   int d;
   int e;
   int f;
   int g;
   clrscr();
   a = 10;
   b = 2;
   c = a+b;
   d = a-b;
   e = a*b;
   f = a/b;
   g = a%b;

   printf("Addition :- %d\n",c);
   printf("Subtraction :- %d\n",d);
   printf("Multiplication :- %d\n",e);
   printf("Division :- %d\n",f);
   printf("Modulo :- %d\n",g);
   getch();
}
