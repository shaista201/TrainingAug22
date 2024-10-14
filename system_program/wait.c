#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
pid_t pid=fork();

if(pid==0)
{
 printf("child process is terminating\n");
exit(0);
 }
 else{
 wait(NULL);
  printf("parent is ceaning child process\n");
  }
  return 0;
 }
