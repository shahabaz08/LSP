// open file and read bytes from that ...

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>



int main(int argc, char * argv[])
{
    int fd=0;
    int Ret=0;
    char * Buffer;
    int size;
    if(argc!=3)
    {
        return -1;
    }
    fd=open(argv[1],O_RDONLY);
    if(fd==-1)
    {
        printf("Unable to oprn file\n");
        return -1;
    }
    size=atoi(argv[2]);
    Buffer=(char *)malloc(sizeof(atoi(argv[2])));

    Ret=read(fd,Buffer,atoi(argv[2]));
    if(Ret==0)
    {
        printf("Unable to read data from file\n");
        return -1;
    }
    printf("Data from file is :\n\n");
    write(1,Buffer,Ret);
    return 0;


}