/* Write a program that uses fork to create a child process. The child process should print "Hello from child!" and the parent process should print "Hello from parent!".*/
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main()
{
 pid_t pid=fork();

 if(pid==0)
 {
  printf("Hello from child process\n");
  exit(0);
 }
 else if(pid >0)
 {
  wait(NULL);
  sleep(2);
  printf("Hello from parent process\n");
 }
 return 0;
 }
