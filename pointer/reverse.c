//1. Write a program to reverse the elements of an array.
#include<stdio.h>
int main()
{
 int a[5]={1,2,3,4,5};
 int *iptr;
 int *dptr;
 iptr=a;
 printf("reverse array is: ");
 for(int i=4;i>=0;i--)
 {
  dptr=iptr+i;
   printf(" %d",*dptr); 
  }
  printf("\n");
  return 0;
  }
