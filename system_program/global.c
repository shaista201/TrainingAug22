#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/stat.h>
int x=1;
int main()
{
    pid_t pid,a=4;
    
    pid=fork();
    
    if(pid==0)
    {
        printf("child process %d, %d\n",++x,++a);
    }
    else{
        wait(NULL);
        printf("parent process %d, %d\n",--x,--a);
    }
    
    printf("process id of %d\n",getpid());
    
    return 0;
    
}
