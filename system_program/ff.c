 #include<stdio.h>
 #include<unistd.h>
  
int main()
{
    pid_t pid=fork();
    
    if(pid==0)
    {
        printf("child is waiting parent to terminate\n");
        
        sleep(5);
        printf("child has become orphan\n");
	
    }
    else{
        printf("parent is terminating\n");
        _exit(0);
    }
    
    return 0;
}
   
