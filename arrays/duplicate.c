//6.Write a program to remove duplicate elements from an array.
#include<stdio.h>

int main()
{
int k=0;
 int arr[6]={1,2,1,3,4,2};
 int temp[6];
 int flag=0;
 for(int i=0;i<6;i++)
 {
   flag=0;
   for(int j=i+1;j<6;j++)
   {
    if(arr[i]==arr[j])
    { 
     flag=1;
	 break;
    }
   }
   	if(flag==0)
	{
	temp[k]=arr[i];
	k++;
	}
 }
 printf("after removing duplicates:\n");
 for(int i=0;i<k;i++)
 {
 printf(" %d",temp[i]);
 }
 printf("\n");
return 0;
}

