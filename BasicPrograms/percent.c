/*6. Write a C program that takes a percentage input from the user and prints the corresponding grade based on the following criteria:
>= 90: Grade A
>= 80: Grade B
>= 70: Grade C
>= 60: Grade D
< 60: Fail */

#include<stdio.h>
#include<stdlib.h>

int main()
{
float percent;
printf("Enter the percent\n");
scanf("%f",&percent);

if(percent>=90)
{
printf("Grade A\n");
}
else if(percent>=80 && percent<90)
{
printf("Grade B\n");
}
else if(percent>=70 && percent<80)
{
printf("Grade C\n");
}
else if(percent>=60 && percent<70)
{
printf("Grade D\n");
}
else
printf("Fail\n");

return EXIT_SUCCESS;
return EXIT_FAILURE;
}
