// Write a program to calculate the sum and average of elements in an array.
#include<stdio.h>

int main()
{
int n;
 int a[n];
 printf("Enter value of n:\n");
  scanf("%d",&n);

 int *iptr;
 iptr=a;
 int sum=0;
 int avg;
 printf("Enter elements:\n");
 for(int i=0;i<n;i++)
 {
   scanf("%u",iptr+i);
 } 
printf("value of suma and average is: ");
 for(int i=0;i<n;i++)
  { 
    sum=sum+*iptr;
    iptr++;
  }
 avg=sum/n;
 printf(" %d\n%d\n",sum,avg);
 return 0;
 }

