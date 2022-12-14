//WAP to create login mechanism by entering right email & password.
#include <stdio.h> 
main()
{
	char username1[50], username2[50], password1[20], password2[20]; 
    
    printf("Enter your username1 :- "); 
    gets(username1);
 
    printf("Enter your password1 :- "); 
    gets(password1);
    
    printf("Re-enter your username2 :- "); 
    gets(username2);
 
    printf("Re-enter your password2 :- "); 
    gets(password2);
    
    if(strcmp(username1,username2)==0)
    {
    	if(strcmp(password1,password2)==0)
    	{
    		printf("\nWelcome.Login Success!");
		}
		else
		{
			printf("\nWrong password..."); 
		}
	}
	else
	{
		printf("\nUser doesn't exist...");
	}
}