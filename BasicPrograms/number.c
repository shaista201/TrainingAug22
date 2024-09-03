//1. program to find given number is Odd or Even
#include<stdio.h>
#include<stdlib.h>

int main()
{
int number;
printf("Enter a number:\n");
scanf("%d",&number);

if(number%2==0)
{
printf("number is even%d:\n",number);
}
else{
printf("number is odd:%d\n",number);
}
return EXIT_SUCCESS;
return EXIT_FAILURE;
}
