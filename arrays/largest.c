//7. Write a program to find the second largest element in an array.
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
 int temp;
 for(int i=0;i<n-1;i++)
 {
  for(int j=i+1;j<n;j++)
  {
   if(arr[i]>arr[j])
   {
   temp=arr[i];
   arr[i]=arr[j];
   arr[j]=temp;
   }
   }
  }
  printf("sorted array:\n");
 
 for(int i=0;i<n;i++)
 {
  printf(" %d",arr[i]);
 }
 printf("\n");
 printf("second largest element is: %d",arr[1]);
 printf("\n");
 return 0;
}

