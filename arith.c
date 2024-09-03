#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,b;
int result;
int r1,r2,r3,r4;
printf("Enter the value of a and b:\n");
scanf("%d%d",&a,&b);

r1=a+b;
r2=a-b;
r3=a*b;
r4=a/b;
 printf("The arithmetic operation value of %d and %d is %d,%d,%d,%d:\n",a,b,r1,r2,r3,r4);

return EXIT_SUCCESS;

return EXIT_FAILURE;
}
