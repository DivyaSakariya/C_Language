/* A B C D E	1 2 3 4 5
     A B C D	  1 2 3 4
       A B C	    1 2 3
         A B	      1 2
           A	        1 */
#include<stdio.h>
main()
{
	char i,j,s;
	for(i='E';i>='A';i--)
	{
		for(s='D';s>=i;s--)
		{
			printf("  ");
		}
		for(j='A';j<=i;j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
}
