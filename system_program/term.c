#include<stdio.h>
#include<signal.h>
#include<unistd.h>
void signal_handler(int signo)
{
if(signo==SIGINT){
 printf("signal recieved for interrupt %d\n",signo);
 }
else if(signo==SIGTERM){
 printf("signal recieved to terminate %d\n",signo);
 }
}
int main()
{
 signal(SIGINT,signal_handler);
 signal(SIGTERM,signal_handler);
 while(1)
 {
  printf("enter the signal\n");
  sleep(2);
  }
  return 0;
}
