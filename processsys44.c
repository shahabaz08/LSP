/// exec and fork run in LINUX

// exec has  ./ exe as the arguments 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


int main()
{
    int Ret=0;
    Ret=fork();

    if(Ret==0)
    {
        ececl("./Childprocess",NULL,NULL);
    }

    else
    {
        printf("Parent is running with pid %d",getpid());
    }
    return 0;
}