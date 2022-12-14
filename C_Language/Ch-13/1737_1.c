//1.WAP to student record system using structure.

#include<stdio.h>

struct infor {
	int stu_id;
	char stu_name[50];
	int stu_age;
	char stu_course[50];
	char stu_city[50];
	int stu_std;
	char stu_school[50];
}a1,a2;

void main()
{
	printf("Record of 1st student :\n");
	printf("Student ID :- ");
	scanf("%d",&a1.stu_id);
	printf("Student name :- ");
	scanf("%s", &a1.stu_name);	
	printf("Student age :- ");
	scanf("%d",&a1.stu_age);
	printf("Student course :- ");
	scanf("%s",&a1.stu_course);
	printf("Student city :- ");
	scanf("%s",&a1.stu_city);
	printf("Student std :- ");
	scanf("%d",&a1.stu_std);
	printf("Student school :- ");
	scanf("%s",&a1.stu_school);	
	
	printf("\nRecord of 2nd student :\n");
	printf("Student ID :- ");
	scanf("%d",&a2.stu_id);
	printf("Student name :- ");
	scanf("%s", &a2.stu_name);	
	printf("Student age :- ");
	scanf("%d",&a2.stu_age);
	printf("Student course :- ");
	scanf("%s",&a2.stu_course);
	printf("Student city :- ");
	scanf("%s",&a2.stu_city);
	printf("Student std :- ");
	scanf("%d",&a2.stu_std);
	printf("Student school :- ");
	scanf("%s",&a2.stu_school);	
}