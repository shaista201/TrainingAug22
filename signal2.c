#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void signal_handler(int signo)
{
  printf("printing interuppt signal: %d\n",signo);
 }
int main()
{
 signal(SIGINT,signal_handler);

 while(1)
 {
   printf("running infinite loop\n");
   sleep(2);
 }
 return 0;
}

