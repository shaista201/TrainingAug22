//2. Write a program to search for a specific element in an array and print its index if found.
#include<stdio.h>
int main()
{
 int a[5]={3,4,1,2,6};
 int *iptr;
 iptr=a;
 int x;
 printf("Enter element to be searched:\n");
 scanf("%d",&x);
 
 printf("index for element %d to search is:",x);
 for(int i=0;i<5;i++)
 {
   if(*iptr==x)
   {
     printf("%d\n",i);
	}
	iptr++;
  }
 return 0;
 }

