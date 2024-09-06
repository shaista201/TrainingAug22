//8. Write a program to check if an array is a palindrome
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
 int mid=(n/2);
 int flag=0;
 for(int i=0;i<=mid;i++)
 {
  if(arr[mid-i]!=arr[mid+i])
  {
   flag=1;
   }
  }
 if(flag==1)
 {
  printf("Not Palindrome\n");
  }
  else
   printf("Palindrome\n");
return 0;
}

