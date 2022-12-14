/*         A	         1
         B A	       2 1
       C B A	     3 2 1
     D C B A 	   4 3 2 1
   E D C B A	 5 4 3 2 1 */
#include<stdio.h>
main()
{
	char i,j,s;
	for(i='A';i<='E';i++)
	{
		for(s='D';s>=i;s--)
		{
			printf("  ");
		}
		for(j=i;j>='A';j--)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
}
    
    
    
    
  
