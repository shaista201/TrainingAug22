//3. write a  C program that performs temperature conversions between Celsius to Fahrenheit
#include<stdio.h>
#include<stdlib.h>

int main()
{

float celsius,fahrenheit;

printf("Ente temp in celsius:\n");
scanf("%f",&celsius);

fahrenheit=(celsius*9/5)+32;

printf("Temp in fahrenheit is %f:\n",fahrenheit);

return EXIT_SUCCESS;

return EXIT_FAILURE;
}
