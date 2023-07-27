/// implemanetation of fork///
// used to create new process ...
// only system call that returns 2 return values...
// one parent and one child
//if child is running it gets 0 return value
// parent gets return value of vhild by fork system call...


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    int Ret=0;

    Ret=fork();
    if(Ret==0)
    {
        printf("Child process is running :\n");

    }
    else
    {
        printf("Parent process is running \n\n");
    }


    return 0;
}