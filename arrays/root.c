/*2. Write a program that prompts the user for a positive integer and then reports the closest integer having a whole number square root. 
For example, if the user enters 8, then the program reports 9. If the user enters 18, then the program reports 16.
The program should work  for any number having one to seven digits.*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
printf("Enter the digit\n");
scanf("%d",&n);
int i=0,num;
int result=0;
do
{
num=i*i;
if(n>num)
 result=num;
 i++;
}
while(i<n);
printf("%d\n",result);

return 0;
}
