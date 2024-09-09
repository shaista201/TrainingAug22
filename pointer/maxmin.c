// Write a program to find the maximum and minimum elements in an array of integers.

#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[5]={3,5,8,2,1};
int *iptr;
iptr=a;
int max=*iptr;
int min=*iptr;
for(int i=0;i<5;i++)
{
  if(max<*iptr)
  {
    max=*iptr;
  }

  if(min>*iptr)
  {
  min=*iptr;
  }
  iptr++;
 }

 printf("max is:%d\n",max);
 printf("min is:%d\n",min);

 return 0;
 }
