//10. Write a program that converts time in minutes to time in hours and minutes. Use #define or const to create a symbolic constant for 60.
#include<stdio.h>
#include<stdlib.h>
#define MIN 60
int main()
{
int time;
int hour,min;
printf("Enter the time in minute\n");
scanf("%d",&time);

hour=time/MIN;
min=time% MIN;
printf("Time in hours and minutes is: %d:%d\n",hour,min);

return EXIT_SUCCESS;
return EXIT_FAILURE;
}
