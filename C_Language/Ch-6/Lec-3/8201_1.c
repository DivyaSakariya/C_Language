//WAP to create/simulate telecom call service conversation scenario using nested switch case.
#include<stdio.h>
main()
{
	int choice;
	printf("Enter 1 : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("\nGujarati maate ek dabawo...");
			printf("\nHindi ke liye do dabaiye...");
			printf("\nMarathi saathi teen daaba...");
			printf("\nPress four for English...");
			scanf("%d",&choice);
			switch(choice)
				{
					case 1:
						printf("\nRecharge karava mate ek dabawo...");
						printf("\nAccount ma balance jova mate bee dabavo...");
						printf("\nAccount ni jaankari melavava maate tran dabawo...");
						scanf("%d",&choice);
							switch(choice)
							{
								case 1:
									printf("\nwaat juoo tamaro call connect thai che...");
									break;
									
								case 2:
									printf("\nwaat juoo tamaro call connect thai che...");
									break;
									
								case 3:
									printf("\nwaat juoo tamaro call connect thai che...");
									break;
									
								default:
									printf("\nInvalid choice.");
							}
							break;
					case 2:
						printf("\nRecharge karnekeliyee ek dabaiye...");
						printf("\nAccount me balance check karne ke liyee doo dabaiye...");
						printf("\nAccount ki jankari prapt karne ke liyr teen dabaiye...");
						scanf("%d",&choice);
							switch(choice)
							{
								case 1:
									printf("\nIntajar kijiye call jud rathi hai...");
									break;
									
								case 2:
									printf("\nIntajar kijiye call jud rathi hai...");
									break;
									
								case 3:
									printf("\nIntajar kijiye call jud rathi hai...");
									break;
									
								default:
									printf("\nInvalid choice.");
							}
							break;
					case 3:
						printf("\nRecharge check karniya sathi ek daaba...");
						printf("\nAccount madhii balance check karnya saathi don daaba...");
						printf("\nAccount chi jaankari baghnya saathi teen daaba..");
						scanf("%d",&choice);
							switch(choice)
							{
								case 1:
									printf("\nwaat paha call judat aahe...");
									break;
									
								case 2:
									printf("\nwaat paha call judat aahe...");
									break;
									
								case 3:
									printf("\nwaat paha call judat aahe...");
									break;
									
								default:
									printf("\nInvalid choice.");
							}
							break;
					case 4:
						printf("\nPress one for recharge...");
						printf("\nPress two to check the balance in the account...");
						printf("\nPress three to get the information about the account..");
						scanf("%d",&choice);
							switch(choice)
							{
								case 1:
									printf("\nWait the call is connecting...");
									break;
									
								case 2:
									printf("\nWait the call is connecting...");
									break;
									
								case 3:
									printf("\nWait the call is connecting...");
									break;
									
								default:
									printf("\nInvalid choice.");
							}
							break;
							default:
								printf("\nInvalid choice.");
				}
	}
}
