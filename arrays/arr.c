/*Write a program to read and print array elements( using index and using address)*/
#include<stdio.h>
int main()
{
int arr[5];
printf("Enter the array elements:\n");

for(int i=0;i<5;i++)
{
scanf("%d",&arr[i]);
}
for(int i=0;i<5;i++)
{
printf("array elements are:%d\n",arr[i]);
}
return 0;
}
