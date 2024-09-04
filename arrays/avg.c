// Write a program to calculate the sum and average of elements in an array.
#include<stdio.h>
#include<math.h>

int main()
{
int sum=0;
int avg;

int arr[5]={4,5,2,7,8};

for(int i=0;i<5;i++)
{
sum=sum+arr[i];
}
avg=sum/5;
printf("sum of array is:%d\n",sum);
printf("average of array is:%d\n",avg);

return 0;
}
