/* A			1
   B C			2  3
   D E F		4  5  6
   G H I J		7  8  9  10
   K L M N O 	11 12 13 14 15 */
#include<stdio.h>
main()
{
	int i,j,num=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",num);
			num++;
		}
		printf("\n");
	}
}
