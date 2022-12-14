/* 5 4 3 2 1
     5 4 3 2 
       5 4 3 
         5 4
           5 */
#include<stdio.h>
main()
{
	int i,j,s;
	for(i=1;i<=5;i++)
	{
		for(s=i;s>1;s--)
		{
			printf("  ");
		}
		for(j=5;j>=i;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
