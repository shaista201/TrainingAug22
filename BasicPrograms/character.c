
/*8. Write a C program that reads a character from the user and checks whether it is a vowel (a, e, i, o, u) or a consonant using a switch statement*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
char ch;
printf("Enter the char ch:\n");
scanf("%c",&ch);

switch(ch)
{
case 'a':printf("vowel\n");
         break;
case 'e':printf("vowel\n");
         break;
case 'i':printf("vowel\n");
        break;
case 'o':printf("vowel\n");
         break;
case 'u':printf("vowel\n");
         break;
default:printf("Consonant\n");
        break;
}
return EXIT_SUCCESS;
return EXIT_FAILURE;
}
