/* A			1
   A B 			1 2
   A B C		1 2 3
   A B C D		1 2 3 4
   A B C D E 	1 2 3 4 5*/
#include<stdio.h>
main()
{
	char i,j;
	for(i='A';i<='E';i++)
	{
		for(j='A';j<=i;j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
}
