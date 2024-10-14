#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void signal_handler(int signo)
{
  printf("interrupt occur:%d\n");
  signal(SIGINT,alternate_handler);
}
int main()
{
 signal(SIGINT, signal_handler);
 signal(SIGQUIT,alternate_handler);
 while(1)
 {
 printf("running infinnite loop\n");
 sleep(2);
 }
 return 0;
 }


