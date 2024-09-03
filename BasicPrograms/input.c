/*7. Write a C program that takes an integer input from the user and prints whether it is positive, negative, or zero.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
int a;
printf("Enter the input a:\n");
scanf("%d",&a);

if(a<0)
printf("negative\n");
else if(a>0)
printf("positive\n");
else if(a=0)
printf("zero\n");

return EXIT_SUCCESS;
return EXIT_FAILURE;
}
