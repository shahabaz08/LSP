//Ass 4 last




#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<sys/stat.h>


int main(int argc,char * argv[])
{

    int fd=0,ret=0;
    int Arr[20];

    fd=open(argv[1],O_RDONLY);
    if(fd==-1)
    {
        printf("Unable to oprn file\n");
        return -1;
    }
   ret= lseek(fd,atoi(argv[2],0));
    read(fd,Arr,20);

    printf("Data frm file is :\n");
    write(1,Arr,ret);

    close(fd);
    return 0;
}