/*1. Write a program that prompts the user for a positive integer and then computes the sum of all the digits of the number. For example, if the user enters 2784, then the program reports 21. If the user enters 59, then the program reports 14. The program should work for any number having one to ten digits.*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
int sum=0;
int n;
printf("Enter the number\n");
scanf("%d",&n);

while(n!=0)
{
sum=sum+(n%10);
n=n/10;
}
printf("sum of the numbers is:%d\n",sum);

return EXIT_SUCCESS;
return EXIT_FAILURE;
}

