/* 0			1
   0 1			1 2
   0 1 0		1 2 3 
   0 1 0 1		1 2 3 4
   0 1 0 1 0 	1 2 3 4 5 */
#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			{
				printf("1 ");
			}
			else
			{
				printf("0 ");
			}
		}
		printf("\n");
	}
}
