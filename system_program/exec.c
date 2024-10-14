#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/stat.h>
int x=1;
int main()
{
    int status=8;
    int retval=0;
    int lcount=0;
   pid_t pid=fork();
   
   if(pid==0)
   {
       printf("child process id:\n",getpid());
       exit(status);
   }
   else{
       retval=wait(&status);
       printf("retval %d\n status %d\n",retval,status);
       
       printf("child exit status %d",WTERMSIG(status));
       
       while(lcount++<1)
       {
           sleep(4);
           printf("parent process %d",getpid());
       }
   }
   return 0;
   
    
}
