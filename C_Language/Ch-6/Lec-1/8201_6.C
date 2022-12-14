//Take 5 values from user then print positive and negative number and sum of them.
#include<stdio.h>
#include<conio.h>
main()
{
    int n,ps=0,ns=0,num,i;
    clrscr();
    printf("How many numbers you want to enter : ");
    scanf("%d",&n);
    printf("\nEnetr %d Numbers:\n\n",n);

    for(i=1;i<=n;i++)
    {
	scanf("%d",&num);
	if(num>0)
	{
	    ps=ps+num;
	}
	else
	{
	    ns=ns+num;
	}
    }
    printf("Sumof Positive Numbers = %d\nSum of Negative Numbers = %d",ps,ns);
    getch();
}