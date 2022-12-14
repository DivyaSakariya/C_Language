/* * *
   *   *
   *    *
   *    *
   *    *
   *   *
   * * */
#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=2;j++)
		{
			if(i==1 || i==7)
			{
				printf("* ");
			}
			else if(j==1)
			{
				printf("* ");
			}
			else if(i==2 || i==6)
			{
				printf("   *");
			}			
			else if(i==3 || i==5)
			{
				printf("    *");
			}			
			else if(i==4)
			{
				printf("    *");
			}
		}
		printf("\n");
	}
}