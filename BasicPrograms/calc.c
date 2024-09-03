#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,b,result;
int op;
printf("Enter two numbers:\n");
scanf("%d%d",&a,&b);
printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
printf("Enter your choice:\n");
scanf("%d",&op);
switch (op)
{
case 1: result=a+b;
        break;
case 2: result=a-b;
        break;
case 3: result=a*b;
        break;
case 4: result=a/b;
        break;
default: result=0;
         printf("Invalid Choice\n");
}
printf("%d\n",result);
return EXIT_SUCCESS;
return EXIT_FAILURE;
}
