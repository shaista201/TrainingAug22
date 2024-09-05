//3. Write a program to sort an array of integers in ascending order.
#include<stdio.h>

int main()
{
  int j,i,n;

  printf("Enter the number of element:\n");
  scanf("%d",&n);

  int arr[n];
  printf("Enter the array elements:\n");
 for(i=0;i<n;i++)
 {
   scanf("%d",&arr[i]);
 }
 int temp;
 printf("ascending array is:\n");
 
 for(i=0;i<n-1;i++)
 {
  for(j=i+1;j<n;j++)
  {
    if(arr[i]>arr[j])
   {
   temp=arr[i];
   arr[i]=arr[j];
   arr[j]=temp;
   }
 }
 }
 for(i=0;i<n;i++)
 {
  printf("%d\t",arr[i]);
 }
 return 0;
 }
  
