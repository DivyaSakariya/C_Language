//WAP to prove that integers range is upto 32,767 using Pointer in Turbo C++.
#include<stdio.h>
#include<limits.h>
#include<conio.h>
void main()
{
	int *r;
	int *r1;
	clrscr();

	r = INT_MIN;
	r1 = INT_MAX;
	printf("The range of integer :- %d to %d",r,r1);
	getch();
}