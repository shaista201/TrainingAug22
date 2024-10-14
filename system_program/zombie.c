#include<stdio.h>
#include<unistd.h>

int main()
{
 pid_t pid=for();

 if(pid==0)
 {
   printf("child process");
   exit(0);
  }
  else{
   printf("parent process\n");
   sleep(5);
   }
   return 0;
 }
