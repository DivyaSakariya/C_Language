//WAP to convert given string in togglecase.
#include<stdio.h>

main()
{
	int n;
	printf("Enter the size of your name :- ");
	scanf("%d",&n);
	
	char name[50];
	int i;
	printf("Enter your name :- ");
	for(i=0;i<=n;i++)
	{
		scanf("%c",&name[i]);
	}
	for(i=0;i<=n;i++)
	{
		if(name[i]>=65 && name[i]<=90) 
		{
			name[i]+=32;
		}
		else if(name[i]>=97 && name[i]<=122)
		{
			name[i]-=32;
		}
	}
	printf("\nThe string in toggle case is :- %s",name);
}