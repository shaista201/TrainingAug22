//4.Write a program to merge two arrays into a single array.
#include<stdio.h>

int main()
{
int n,m;
printf("Enter the no. of elements for n and m:\n");
scanf("%d%d",&n, &m);

int arr1[n];
int arr2[m];
int arr3[50];
int i,j;
printf("Enter the element in arr1:\n");
for(i=0;i<n;i++)
{
 scanf("%d",&arr1[i]);
 }
printf("Enter element in arr2:\n");
for(j=0;j<m;j++)
{
 scanf("%d", &arr2[j]);
}
 for(i=0;i<n;i++)
 {
  arr3[i]=arr1[i];
 }
 for(j=n;j<n+m;j++)
 {
  arr3[j]=arr2[j];
 }
  printf("merges array is:\n");
   for(int k=0;k<n+m;k++)
   {
   printf("%d\t",arr3[k]);
   }



return 0;
}

