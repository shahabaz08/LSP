// create file 

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>


int main(int argc,char * argv[])
{
    int fd=0;
    if(argc!=2)
    {
        printf("Invalic arguments\n");
    }

    fd=open(argv[1],O_RDWR);
    if(fd!=-1)
    {
        printf("File is existing\n\n");

    }
    else
    {
        fd=creat(argv[1],0777);
        if(fd!=-1)
        {
            printf("New file gets created\n");
        }
    }


    return 0;
}