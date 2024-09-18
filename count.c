//5. Write a program to count the occurrences of each element in an array.
#include<stdio.h>
int main()
{
int a[5]={1,1,2,2,5};
int *iptr;
iptr=a;
int *jptr;
int count=1;
for(int i=0;i<5;i++)
{
 count=1;
 for(int j=i+1;j<5;j++)
 {
 iptr=&a[i];
 jptr=&a[j];
   if(*iptr==*jptr)
   {
     count++;
   }
 }
 printf("count of %d is %d\n",a[i],count);
}
return 0;
}
