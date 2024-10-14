#include<stdio.h>
#include<signal.h>
#include<unistd.h>
void signal_handler(int signo)
{
 printf("alarm rang: %d\n",signo);
 exit(1);
}
int main()
{
 signal(SIGALRM,signal_handler);

 alarm(5);

 printf("Set alarm for 5 second\n");

 while(1)
 {
  printf("alarm is set:\n");
  sleep(1);
  }
  return 0;
 }
