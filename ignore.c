/*3. Write a program that ignores the SIGINT signal. Test the program to ensure that pressing Ctrl+C does not interrupt its execution.(Hint use signal(SIGINT, SIG_IGN) to ignore SIGINT)*/
#include<stdio.h>
#include<signal.h>
#include<unistd.h>
void signal_handler(int signo)
{
 printf
int main()
{
 signal(SIGINT,signal_handler);

 while(1)
 {
  printf("Enter signal\n");
  sleep(1);
 }
 return 0;
 }
