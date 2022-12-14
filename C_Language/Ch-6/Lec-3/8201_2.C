//WAP to print month names using switch case.
#include<stdio.h>
#include<conio.h>
main()
{
    char ch;
    clrscr();
    printf("Print J for January.");
    printf("\nPrint F for February.");
    printf("\nPrint M for March.");
    printf("\nPrint A for April.");
    printf("\nPrint m for May.");
    printf("\nPrint j for June.");
    printf("\nPrint U for July.");
    printf("\nPrint a for August.");
    printf("\nPrint S for September.");
    printf("\nPrint O for October.");
    printf("\nPrint N for November.");
    printf("\nPrint D for December.\n");

    printf("\nEnter any Choice from this : ");
    scanf("%c",&ch);

    switch(ch)
    {
	case 'J':
	    printf("\nJanuary");
	    break;

	case 'F':
	    printf("\nFebruary");
	    break;

	case 'M':
	    printf("\nMarch");
	    break;

	case 'A':
	    printf("\nApril");
	    break;

	case 'm':
	    printf("\nMay");
	    break;

	case 'j':
	    printf("\nJune");
	    break;

	case 'U':
	    printf("\nJuly");
	    break;

	case 'a':
	    printf("\nAugust");
	    break;

	case 'S':
	    printf("\nSeptember");
	    break;

	case 'O':
	    printf("\nOctober");
	    break;

	case 'N':
	    printf("\nNovember");
	    break;

	case 'D':
	    printf("\nDecember");
	    break;

	default :
	    printf("\nInvalid Choice.");
    }
    getch();
}