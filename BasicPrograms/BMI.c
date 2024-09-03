/*5. BMI Calculator:
Extend BMI program and Use if statements to classify the BMI into categories:
Below 18.5: Underweight
18.5 to 24.9: Normal weight
25 to 29.9: Overweight
30 and above: Obesity*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
float bmi;
printf("Enter the bmi\n");
scanf("%f",&bmi);
if(bmi<18.5)
{
printf("underweight\n");
}
else if(bmi>=18.5 && bmi<=24.9)
{
printf("Normal weight\n");
}
else if(bmi>=25 && bmi<=29.9)
{
printf("Overweight");
}
else if(bmi>=30)
{
printf("Obesity\n");
}
return EXIT_SUCCESS;
return EXIT_FAILURE;
}
