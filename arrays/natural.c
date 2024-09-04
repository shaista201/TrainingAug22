//Write a program to initialize an array with the first 10 natural numbers and print the elements
#include<stdio.h>

int main()
{
int arr[10]={1,2,3,4,5,6,7,8,9,10};

printf("array elements are:\n");

for(int i=0;i<10;i++)
{
printf("%d ",arr[i]);
}
printf("\n");
return 0;
}
