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
        printf("Invalic arguments");
    }

    fd=creat(argv[1],0777);
    if(fd!=-1)
    {
        printf("File is successfully created with fd %d",fd);
    }


    return 0;
}