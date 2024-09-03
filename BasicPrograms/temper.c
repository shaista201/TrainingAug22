/*4. Temperature Advice:
Write a program that takes a temperature value as input and uses if statements to print advice based on the temperature:
Above 30: "It's hot outside, stay hydrated!"
Between 20 and 30: "The weather is nice and warm."
Between 10 and 19: "It's a bit chilly, wear a jacket."
Below 10: "It's cold outside, stay warm!"*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
int temp;
printf("Enter the temperature\n");
scanf("%d",&temp);
if(temp>30)
{
printf("Its hot outside, stay hydrated\n");
}
if(temp>=20 && temp<30)
{
printf("The weather is nice and warm\n");
}
if(temp>=10 && temp<20)
{
printf("It's a bit chilly, wear a jacket.\n");
}
if(temp<10)
{
printf("It's cold outside, stay warm!\n");
}

return EXIT_SUCCESS;
return EXIT_FAILURE;
}
