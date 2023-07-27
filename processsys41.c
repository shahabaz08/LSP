

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int NO=10;

void fun()
{
    NO++;
    printf("Running process PID is %d:\n",getppid());
    printf("NO : ",NO);

}

int main()
{
    int Ret=0;

    Ret=fork();

    if(Ret==0)
    {
        fun();
    }
    else 
    {
        fun();
    }

    


    return 0;
}