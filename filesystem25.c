// aasignment 1 
//2
// open file if not create

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

    fd=open(argv[1],O_RDWR | O_CREAT);
    if(fd!=-1)
    {
        printf("File is successfully oprnrd with fd %d",fd);
    }


    return 0;
}