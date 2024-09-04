#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,b,add,sub,mult,div;
int result, oper;
printf("Enter the value of a and b\n");
scanf("%d%d",&a,&b);
printf("1.add\n2.sub\n3.mult\n4.div\n");
printf("Enter your choice:\n");
scanf("%d",&oper);
switch(oper)
{
case 1: result=a+b;
        break;
case 2: result=a-b;
        break;
case 3: result=a*b;
        break;
case 4: result=a/b;
        break;
default:printf("wrong choice\n");
}
printf("calculation is %d\n",result);
return EXIT_SUCCESS;
return EXIT_FAILURE;
}
