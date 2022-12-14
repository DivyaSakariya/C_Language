#include<stdio.h>
main()
{
	char pass[50];
	int i,h1=0,h2=0,h3=0;
	
	printf("Enter password :- ");
	gets(pass);
	
	if(strlen(pass)>=6)
	{
		for(i=0;i<strlen(pass);i++)
		{
			if((pass[i]>='a' && pass[i]<='z') || (pass[i]>='A' && pass[i]<='Z'))
			{
				h1++;
			}
		}
		
		for(i=0;i<strlen(pass);i++)
		{
			if((pass[i]>='0' && pass[i]<='9'))
			{
				h2++;
			}
		}
		
		for(i=0;i<strlen(pass);i++)
		{
			if((pass[i]>='!' && pass[i]<='/') || (pass[i]>=':' && pass[i]<='@'))
			{
				h3++;
			}
		}
		
		if(h1>0 && h2>0 && h3>0)
		{
			printf("\nLogged in...");
		}
		else
		{
			printf("\nInvalid password...");
		}
	}
	else
	{
		printf("\nInvalid password...");
	}
}