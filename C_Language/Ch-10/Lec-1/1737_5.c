//WAP to convert given string in titlecase.
#include<stdio.h>
main()
{
	char name[50];
	int i;
	printf("Enter your name in lower case :- ");
	gets(name);
	
	for(i=0;i<1;i++)
	{
		if(name[i]>=97 && name[i]<=122)
		{
			name[i]-=32;
		}
	}
	printf("\nYour name in title case is :- %s",name);
}