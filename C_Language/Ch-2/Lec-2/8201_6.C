//WAP to find perimeter of a circle.
#include<stdio.h>
#include<conio.h>
main()
{
  const float pi = 3.14;
  float r = 2.5;
  float peri = 2*pi*r;
  clrscr();
  printf("Perimeter of a Circle : %.2f",peri);
  getch();
}