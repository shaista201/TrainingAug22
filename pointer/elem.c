#include<stdio.h>

int main()
{
 int a[10];
 int *iptr;
 iptr=a;
 printf("Enter the array elements:\n");
for(int i=0;i<10;i++)
{
 scanf("%u",iptr+i);
 }
 for(int i=0;i<10;i++)
 {
  printf("%d\n",*iptr);
  iptr++;
 }
 return 0;
 }
