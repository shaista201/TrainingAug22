#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void signal_handler(int signo)
{
 printf("interrrupt signal %d\n:",signo);

}

int main()
{
 signal(SIGQUIT,signal_handler);

 while(1)
 {
   sleep(2);
   printf("signal demo: while loop \n");
  }
  return 0;
 }

