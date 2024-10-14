/*3. Write a program that ignores the SIGINT signal. Test the program to ensure that pressing Ctrl+C does not interrupt its execution.(Hint use signal(SIGINT, SIG_IGN) to ignore SIGINT)*/
#include<stdio.h>
#include<signal.h>
#include<unistd.h>

int main()
{
 signal(SIGINT,SIG_IGN);

 while(1)
 {
  printf("Enter signal\n");
  sleep(1);
 }
 return 0;
 }
