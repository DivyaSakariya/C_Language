//WAP to convert given string in lowercase.
#include<stdio.h>
main()
{
	char name[50];
	printf("Enter your name :- ");
	gets(name);
	strlwr(name);
	puts(name);
}