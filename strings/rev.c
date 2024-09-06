//2. WAP to reverse the given string
#include<stdio.h>
#include<string.h>
#define MAX 50
int main()
{
char str[MAX];
char revstr[MAX];
int j=0;
printf("Enter a string:\n");
fgets(str, MAX,stdin);
int len=strlen(str);
 if(str[len-1]=='\n'){
    str[len-1]='\0';
	len--;
	}
 for(int i=len-1;i>=0;i--)
 {
  
  revstr[j]=str[i];
  j++;
 }
  revstr[len]='\0';
  printf("reversed string is:%s\n",revstr);
  printf("\n");

  return 0;
  }

