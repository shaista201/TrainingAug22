#include<stdio.h>

int main()
{
int i,j,n;
printf("Enter the value of n:\n");
scanf("%d",&n);

int arr[n];
printf("Enter the array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

printf("Reverse elements are:");
for(j=n-1;j>=0;j--)
{
printf("%d\t",arr[j]);
}
printf("\n");
return 0;
}

