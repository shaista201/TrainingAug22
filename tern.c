//4. Write a program that uses the ternary operator (?:) to find the maximum of two numbers.
#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,b;
int result;

printf("Enter value of a and b:\n");
scanf("%d%d",&a,&b);
result=a>b?a:b;

printf("max of two no.s is %d\n",result);

return EXIT_SUCCESS;

return EXIT_FAILURE;

}

