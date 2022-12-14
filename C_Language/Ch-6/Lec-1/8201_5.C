//WAP to find the alphabet is vowel or consonant.
#include<stdio.h>
#include<conio.h>
main()
{
   char alph;
   clrscr();
   printf("Enter the Alphabet : ");
   scanf("%c",&alph);
   if(alph=='a' || alph=='A' || alph=='e' || alph=='E' || alph=='i' || alph=='I' || alph=='o' || alph=='O' || alph=='u' || alph=='U')
   {
      printf("This is Vowel.");
   }
   else
   {
      printf("This is Consonant.");
   }
   getch();
}