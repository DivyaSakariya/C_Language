/* A B C D E	1 2 3 4 5
     B C D E	  2 3 4 5
       C D E	    3 4 5
         D E	      4 5
   		   E	        5 */
#include<stdio.h>
main()
{
	char i,j,s;
	for(i='A';i<='E';i++)
	{
		for(s='A';s<i;s++)
		{
			printf("  ");
		}
		for(j=i;j<='E';j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
}
