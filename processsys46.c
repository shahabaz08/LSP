/// exec and fork run in LINUX

// exec has  ./ exe as the arguments 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


int main()
{
    int Ret=0;
    Ret=fork();

    if(Ret==0)// child
    {
        ececl("./Childprocess","Demo","Hello",NULL);

        // parameter 1:name of exe
        // para 2 : Multiple value seperated by ,which considered as command
        // liner args 
        // argv[0]= :demo
        // argv[1]=hello
        // argv[2];marvellous 
        // para 3: Envirinments variable 

    }

    else   ///parent
    {
        printf("Parent is running with pid %d",getpid());
    }
    return 0;
}