//WAP to print leap year from 2000 to 3000 using do while loop.
#include<stdio.h>
main()
{
	int i=2000;
	do
	{
		if(i%4==0)
		{
			printf("%d\t",i);
		}
		i++;
	}
	while(i<=3000);
}
