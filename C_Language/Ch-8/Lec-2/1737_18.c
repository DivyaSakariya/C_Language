/*         1			1
         0 0		  2 2
       1 1 1		3 3 3 
     0 0 0 0	  4 4 4 4
   1 1 1 1 1	5 5 5 5 5 */
#include<stdio.h>
main()
{
	int i,j,s;
	for(i=1;i<=5;i++)
	{
		for(s=i;s<=4;s++)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
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
