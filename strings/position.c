//1. WAP to get the position of a substring in a string
#include<stdio.h>
#include<string.h>
#define MAX 50
int main()
{
char str[MAX];
int len;
printf("Enter a string:\n");
fgets(str, MAX,stdin);

//printf("string is %s",str);
len = strlen(str);
if(len>0 && str[len-1]=='\n')
{
   str[len-1] = '\0';
  // len--;
 }
char substr[MAX];
printf("Enter a string:\n");
fgets(substr, MAX,stdin);
len = strlen(substr);
if(len>0 && substr[len-1]=='\n')
{
   substr[len-1] = '\0';
 // len--;
 }

char *pos;
pos= strstr(str,substr);
if(pos!=NULL)
{
 int oosi=pos-str;
 printf("position of substr is:%d\n",oosi);
}
else 
{
printf("Not found\n");
}
return 0;
}

