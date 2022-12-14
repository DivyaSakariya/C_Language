//1.WAP to read content from one file & write it to another file.

#include<stdio.h>

void main()
{
	FILE *ptr;
	FILE *ptr1;
	
	char data[50] = "Welcome to C program...";
	
	ptr = fopen("d1.html","r");
	ptr1 = fopen("d2.txt","w");
	
	if(ptr == NULL && ptr1 == NULL)
	{
		printf("Cannot open file...");
	}
	else
	{
		printf("Open file...");
		strcpy(ptr,data);
		fputs(data,ptr);
		strcpy(ptr1,data);
		fputs(data,ptr1);
	}
}