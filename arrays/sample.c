#include<stdio.h>

int main()
{
int n;
printf("Enter the no. of array elements:\n");
scanf("%d",&n);

int arr[n];
printf("Enter the array elements:\n");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
return 0;
}

