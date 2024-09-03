//5. Extend the program to find the maximum of three numbers using nested ternary operators.
#include<stdio.h>
#include<stdlib.h>

int main()
{

int a,b,c;
int x,y;

printf("Enter value of a,b and c:\n");
scanf("%d%d%d",&a,&b,&c);
x=a>b?a:b;
y=x>c?x:c;

printf("maximum of three is: %d\n",y);

return EXIT_SUCCESS;

return EXIT_FAILURE;

}

