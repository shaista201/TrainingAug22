/*1. You must write a function that accepts a string of length "len", the string contains some "#", and you must move all the hashes to the front of the string, return the entire string, and print it.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
void printstring(char *str);
int main()
{
    char str[MAX];
    printf("Enter a string:\n");
    fgets(str,MAX,stdin);
    char *pos;
    if((pos=strchr(str,'\n'))!=NULL)
    {
        *pos='\0';
    }
    
    printstring(str);
}

void printstring(char *str)
{
    int len=strlen(str);
    int count=0;
    for(int i=0;i<len;i++)
    {
         if(str[i]=='#')
           {
             count++;  
            
           }

    }
    printf("%d\n",count);
    int k=0;
    for(int i=0;i<len;i++)
    {
        if(str[i]=='#')
         {
            for(int j=i;j>0;j--)
            {
            str[j]=str[j-1];
            }
        
         }
    }
    
    for(int i=0;i<count;i++)
    {
        str[i]='#';
    }
    
     printf("%s",str);

   
}
