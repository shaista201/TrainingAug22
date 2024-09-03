#include<stdio.h>
#include<stdlib.h>
#define PI 3.14
int main()
{
int radius;
float area, circumference;

printf("Enter the radius:\n");
scanf("%d",&radius);

area=PI*radius*radius;
circumference=2*PI*radius;

printf("area of a circle is %f:\n",area);
printf("circumference of a circle is %f:\n",circumference);

return EXIT_SUCCESS;

return EXIT_FAILURE;
}
