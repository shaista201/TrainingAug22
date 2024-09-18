 #include<stdio.h>
 #include<stdlib.h>
  
 int main()
  {
   int arr1[5];
   int arr2[5];
   int arr3[10];
   int filter[10];
 printf("Enter arr1 elements:\n");
  for(int i=0;i<5;i++)
  {
   scanf("%d",&arr1[i]);
  }
  printf("Enter arr2 elements:\n");
  for(int j=0;j<5;j++)
  {
   scanf("%d",&arr2[j]);
  }
  int x=0;
  for(int k=0;k<5;k++)
  {
      arr3[x]=arr1[k];
      x++;
  }
  for(int k=0;k<5;k++)
  {
      arr3[x]=arr2[k];
      x++;
  }
  printf("merged elements are:\n");
  for(int k=0;k<10;k++)
  {
      printf(" %d",arr3[k]);
  }
  printf("\n");
  
  int s=0;
  int count=0;
  printf("odd elements are:\n");
  for(int k=0;k<10;k++)
  {
      int num=(arr3[k]%2);
      if(num!=0)
      {
          filter[s]=arr3[k];
          s++;
          count++;
      }
  }
  for(int i=0;i<count;i++)
  {
      printf(" %d",filter[i]);
  }
  printf("\n");
  
  for(int i=0;i<count;i++)
  {
      for(int j=i+1;j<count;j++)
      {
          if(filter[i]>filter[j])
          {
          int temp=filter[i];
          filter[i]=filter[j];
          filter[j]=temp;
          }
      }
  }
  printf("sorted elements are:\n");
  for(int i=0;i<count;i++)
  {
      printf(" %d",filter[i]);
  }
  printf("\n");
   
   return 0;
 }
   

