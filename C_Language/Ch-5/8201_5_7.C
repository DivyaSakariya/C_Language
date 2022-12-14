//WAP to find the answer given formula (x+y+z)^2.
#include<stdio.h>
#include<conio.h>
main()
{
    int x, y, z, ans;
    clrscr();
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Enter the value of y : ");
    scanf("%d",&y);
    printf("Enter the value of z : ");
    scanf("%d",&z);

    ans = (x*x)+(y*y)+(z*z)+(2*x*y)+(2*y*z)+(2*x*z);
    printf("\nAnswer is :- %d",ans);
    getch();
}