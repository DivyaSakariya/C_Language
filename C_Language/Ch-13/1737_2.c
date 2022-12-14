//2.WAP to employee record system using union.

#include<stdio.h>

union rec {
	int emp_id;
	char emp_name[50];
	int emp_age;
	char emp_role[50];
	char emp_city[50];
	char emp_experience[50];
	int emp_company_name;
}a1,a2,a3;

void main()
{
	printf("Record of 1st employee :\n");
	printf("Employee ID :- ");
	scanf("%d",&a1.emp_id);
	printf("Employee name :- ");
	scanf("%s", &a1.emp_name);	
	printf("Employee age :- ");
	scanf("%d",&a1.emp_age);
	printf("Employee role :- ");
	scanf("%s",&a1.emp_role);
	printf("Employee city :- ");
	scanf("%s",&a1.emp_city);
	printf("Employee experience :- ");
	scanf("%s",&a1.emp_experience);
	printf("Employee company name :- ");
	scanf("%d",&a1.emp_company_name);	
	
	printf("\nRecord of 2nd employee :\n");
	printf("Employee ID :- ");
	scanf("%d",&a2.emp_id);
	printf("Employee name :- ");
	scanf("%s", &a2.emp_name);	
	printf("Employee age :- ");
	scanf("%d",&a2.emp_age);
	printf("Employee role :- ");
	scanf("%s",&a2.emp_role);
	printf("Employee city :- ");
	scanf("%s",&a2.emp_city);
	printf("Employee experience :- ");
	scanf("%s",&a2.emp_experience);
	printf("Employee company name :- ");
	scanf("%d",&a2.emp_company_name);	
	
	printf("\nRecord of 3rd employee :\n");
	printf("Employee ID :- ");
	scanf("%d",&a3.emp_id);
	printf("Employee name :- ");
	scanf("%s", &a3.emp_name);	
	printf("Employee age :- ");
	scanf("%d",&a3.emp_age);
	printf("Employee role :- ");
	scanf("%s",&a3.emp_role);
	printf("Employee city :- ");
	scanf("%s",&a3.emp_city);
	printf("Employee experience :- ");
	scanf("%s",&a3.emp_experience);
	printf("Employee company name :- ");
	scanf("%d",&a3.emp_company_name);	
}