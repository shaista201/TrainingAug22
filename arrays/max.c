// Write a program to find the maximum and minimum elements in an array of integers.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int n,i;
printf("Enter the value of n:\n");
scanf("%d",&n);

int arr[n];
printf("Enter the array elements:\n");
for(i=0;i<n;i++)
{
 scanf("%d",&arr[i]);
}
int max=arr[0];
int min=arr[0];

for(i=0;i<n;i++)
{
 if(max<arr[i])
 {
 max=arr[i];
 }
 if(min>arr[i])
 {
 min=arr[i];
 }
}
printf("maximum element is:%d\n",max);
printf("minimum element is:%d\n",min);

return 0;
}

