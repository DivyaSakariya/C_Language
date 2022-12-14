//WAP to prove that characters range is 127 using pointer in Turbo C++.
#include<stdio.h>
#include<conio.h>
#include<limits.h>
void main()
{
	char *r;
	char *r1;
	clrscr();

	r = CHAR_MIN;
	r1 = CHAR_MAX;
	printf("The range of character :- %d to %d",r,r1);
	getch();
}