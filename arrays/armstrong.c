/*4. Write a C program to determine whether a given positive integer is an Armstrong number. An Armstrong number (also known as a narcissistic number or pluperfect number) is a number that is equal to the sum of its own digits each raised to the power of the number of digits. Your program should:

i. Prompt the user to enter a positive integer.
ii. Determine the number of digits in the number.
iii. Calculate the sum of each digit raised to the power of the total number of digits.
iv Compare the calculated sum to the original number to determine if it is an Armstrong number.
v. Print "Armstrong number" if the number is an Armstrong number, otherwise print "Not an Armstrong number".*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int number;
int digit=0,d;
int p;
int r;
int sum=0;
int y;
printf("Enter the number:\n");
scanf("%d",&number);
y=number;
int x=number;
while(x!=0)
{
d=x%10;
digit++;
x=x/10;
}
while(y!=0)
{
r=y%10;
sum=sum+pow(r, digit);
y=y/10;
}
if(number==sum)
{
printf("Number is armstrong number\n");
}
else
{
printf("Number is not a armstrong number\n");
}
return 0;
}
