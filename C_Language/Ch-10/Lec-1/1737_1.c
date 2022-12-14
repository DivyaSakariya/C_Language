//WAP to convert given character in lowercase.
#include<stdio.h>
main()
{
	int n;
	printf("How many character in your name :- ");
	scanf("%d",&n);
	
	char name[50];
	int i,low;
	printf("\nEnter your name :- ");
	for(i=0;i<=n;i++)
	{
		scanf("%c",&name[i]);
	}
	for(i=1;i<=n;i++)
	{		
		low=name[i]+32;
		printf("%c",low);
	}
}