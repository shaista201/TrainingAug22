/*11. Write a program that asks the user to enter the number of days and then converts that value to weeks and days. For example, it would convert 18 days to 2 weeks, 4 days. Display results in the following format: 18 days are 2 weeks, 4 days.*/
#include<stdio.h>
#include<stdlib.h>
#define TOTAL 7
int main()
{
int days,week,day;
printf("Enter the no. of days\n");
scanf("%d",&days);

week=days/TOTAL;
day=days%TOTAL;
printf("%d days are %d weeks and %d days:\n",days,week,day);

return EXIT_SUCCESS;
return EXIT_FAILURE;
}
