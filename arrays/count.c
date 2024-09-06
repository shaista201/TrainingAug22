//5. Write a program to count the occurrences of each element in an array
#include<stdio.h>

int main()
{
int n;
printf("Enter the no. of array element:\n");
scanf("%d",&n);
int i,j;
int arr[n];
printf("Enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int count=1;
int counted[n];

 for(i=0;i<n;i++)
 {
  counted[i]=0;
 }
 for(i=0;i<n;i++)
 {
  if(counted[i]==1)
  {
  continue;
  }
  count=1;
 for(j=i+1;j<n;j++)
 {
  if(arr[i]==arr[j])
  {
   count++;
   counted[j]=1;
  }
 }
 printf("count of array elements are %d %d\n",arr[i],count);
 }
return 0;
}

