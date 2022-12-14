/* 1			1
   0 1			2 1
   1 0 1        3 2 1 
   0 1 0 1      4 3 2 1 
   1 0 1 0 1    5 4 3 2 1 */
#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=i;j>=1;j--)
		{
			if(j%2==0)
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

