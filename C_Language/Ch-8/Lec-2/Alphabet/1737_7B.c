/* * * *
   *    *
   *    *
   * * *
   *    *
   *    *
   * * * */
#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=3;j++)
		{
			if(i==1 || i==4 || i==7)
			{
				printf("* ");
			}
			else if(j==1)
			{
				printf("* ");
			}
			else if(j==3)
			{
				printf("");
			}
			else if((i==2 || i==6) && (j==2 || j==3))
			{
				printf("   *");
			}
			else if((i==3 || i==5 ||i==7) && (j==2 || j==3))
			{
				printf("   *");
			}
		}
		printf("\n");
	}	
}  