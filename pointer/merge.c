//4.Write a program to merge two arrays into a single array.
#include<stdio.h>
#include<stdlib.h>
int main()
{
 int a[5]={1,2,3,4,5};
 int b[5]={6,7,8,9,10};
 int *iptr;
 int *jptr;
 iptr=a;
 jptr=b;
 int x[10];
 int *kptr;
 kptr=x;
 for(int i=0;i<5;i++)
 {
  *kptr=*iptr;
  kptr++;
  iptr++;
 }

 for(int j=0;j<5;j++)
 {
   *kptr=*jptr;
   kptr++;
   jptr++;
 }
 printf("merged arrays are:\n");

 for(int i=0;i<10;i++)
 {
  printf(" %d",x[i]);
  }
  printf("\n");
  return 0;
  }
 

