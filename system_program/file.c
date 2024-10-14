#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    int fd=open("sample.txt",O_WRONLY|O_CREAT|O_TRUNC,0666);
    
    if(fd==-1)
    {
        perror("open");
        exit(EXIT_FAILURE);
    }
    write(fd,"Hello World!\n",14);
    
    close(fd);
    return 0;
}
