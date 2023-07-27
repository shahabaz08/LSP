


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


int main()
{
    int Ret=0;

    Ret=fork();         ///spawn
    if(Ret==0)
    {
        printf("Child process is running :\n");
        printf("Child says: Pid of parent is %d:\n",getppid());
        printf("Chind says : Pid of child process is %d",getpid());

    }
    else
    {
        printf("Parent process is running \n\n");
         printf("parent saya: PID of parent process is %d\n",Ret);
        printf("Parent says : Pid of parent %d",getpid() );
        printf("parent says : PPID of parent is :%d",getppid());

    }


    return 0;
}