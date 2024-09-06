//9. Write a program to find the transpose of a given 2D array (matrix).
#include<stdio.h>

int main()
{
int n,m;
printf("Enter the no. of array elements in n and m:\n");
scanf("%d%d",&n,&m);

int arr[n][m];
printf("Enter the array elements:\n");
for(int i=0;i<n;i++)
{
 for(int j=0;j<m;j++)
 {
  scanf("%d",&arr[i][j]);
  }
}

 printf("Transpose of 2d array is:\n");
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<m;j++)
  {
  printf(" %d",arr[j][i]);
  }
  printf("\n");
}
return 0;
}

