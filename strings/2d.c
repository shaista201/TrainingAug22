#include<stdio.h>
int main()
{
 int row,col;
 int i,j;
 printf("Enter the row and col value:\n");
 scanf("%d%d",&row,&col);
 printf("Enter the elements:\n");
 int arr[row][col];
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
   scanf("%d",&arr[i][j]);
   }
 }
 printf("array elements are:\n");
  for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
   printf("%d\t",arr[i][j]);
  }
   printf("\n");
 }
  return 0;
  }
