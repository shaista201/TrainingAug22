//2. Write a program to search for a specific element in an array and print its index if found.
#include<stdio.h>
int main()
{
int n,i;

printf("Enter the no. of array elements:\n");
scanf("%d",&n);

int arr[n];
printf("Enter the array elements:\n");
for(i=0;i<n;i++)
{
 scanf("%d",&arr[i]);
}
int x;
 printf("Enter the element to be searched:\n");
 scanf("%d",&x);
for(i=0;i<n;i++)
{
 if(arr[i]==x)
 {
 printf("searched element present at: %d\n",i);
 }
}
return 0;
}

