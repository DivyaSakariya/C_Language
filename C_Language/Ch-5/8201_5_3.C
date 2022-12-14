//WAP to find the answer given formula (x+y)^3.
#include<stdio.h>
#include<conio.H>
main()
{
    int x, y, ans;
    clrscr();
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Enter the value of y : ");
    scanf("%d",&y);

    ans = (x*x*x)+(y*y*y)+(3*x*x*y)+(3*x*y*y);

    printf("\nAnswer is :- %d",ans);
    getch();
}