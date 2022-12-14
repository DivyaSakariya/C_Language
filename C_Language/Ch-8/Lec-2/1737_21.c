/* 1 1 1 1 1	1 2 3 4 5 
     0 0 0 0	  2 3 4 5
       1 1 1		3 4 5
         0 0		  4 5
           1			5 */
#include<stdio.h>
main()
{
	int i,j,s;
	for(i=1;i<=5;i++)
	{
		for(s=1;s<i;s++)
		{
			printf("  ");
		}
		for(j=i;j<=5;j++)
		{
			if(i%2==0)
			{
				printf("0 ");
			}
			else
			{
				printf("1 ");
			}
		}
		printf("\n");
	}
}
