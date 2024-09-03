//2. program to find largest of three numbers
#include<stdio.h>
#include<stdlib.h>

int main()
{
int num1,num2,num3;
printf("Enter the number num1,num2,num3:\n");
scanf("%d%d%d",&num1,&num2,&num3);
if(num1>num2 && num1>num3)
{
printf("num1 is largest: %d\n",num1);
}
else if(num2>num1 && num2>num3)
{
printf("num2 is largest: %d\n",num2);
}
else{
printf("num3 is largest: %d\n",num3);
}
return EXIT_SUCCESS;
return EXIT_FAILURE;
}
