//2. Write a program to search for a specific element in an array and print its index if found.
#include<stdio.h>
#include<stdlib.h>
int main()
{
 int a[5]={3,2,7,8,1};
 int *iptr;
 iptr=a;
 int k;
 printf("Enter value of k in b/w 3,2,7,8,1 :\n");
 scanf("%d",&k);
 for(int i=0;i<5;i++)
 {
   if(*iptr==k)
   {
     printf("index for %d  %d \n",k,i);
	 break;
	}
  iptr++;
 }
return 0;
}
