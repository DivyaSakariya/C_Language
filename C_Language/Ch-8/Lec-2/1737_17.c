/*         1 		    1
         1 0		  1 2
       1 0 1		1 2 3  
     1 0 1 0	  1 2 3 4
   1 0 1 0 1	1 2 3 4 5 */
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
