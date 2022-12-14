//WAP to find leap year from 2000 to 3000 using while loop.
#include<stdio.h>
main()
{
    int i=2000;
    while(i<=3000)
    {
		if(i%4==0)
		{
	    	printf("%d\t",i);
		}
		i++;
    }
}
