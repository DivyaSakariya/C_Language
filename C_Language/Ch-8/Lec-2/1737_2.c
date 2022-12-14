/*         1
         2 1
       3 2 1
     4 3 2 1
   5 4 3 2 1 */
#include<stdio.h>
main()
{
	int i,j,s;
	for(i=1;i<=5;i++)
	{
		for(s=4;s>=i;s--)
		{
			printf("  ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
