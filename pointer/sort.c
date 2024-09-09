//3. Write a program to sort an array of integers in ascending order.
#include<stdio.h>
#include<stdlib.h>
int main()
{
 int a[5]={8,9,6,4,7};
 int *iptr;
 int *jptr;
 iptr=a;
jptr=a+1;
int temp;
 for(int i=0;i<5;i++)
 {
   for(int j=i+1;j<5;j++)
   {
   iptr=&a[i];
   jptr=&a[j];
    if(*iptr>*jptr)
	{
	  temp=*iptr;
	  *iptr=*jptr;
	  *jptr=temp;
	 }
  }
 }
 printf("sorted array is:\n");
 for(int i=0;i<5;i++)
 {
   printf(" %d\n",a[i]);
 }
 return 0;
 }
