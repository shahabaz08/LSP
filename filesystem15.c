//stat system call 
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>


int main(int argc,char *argv[])
{
    struct stat sobj;

    if(argc!=2)
    {
        printf("Insufficient arg");
        return -1;
    }

    stat(argv[1],&sobj);

    printf("File name : %s \n",argv[1]);
    printf("File size is : %d\n",sobj.st_size);
    printf("Number of Links : %d \n",sobj.st_nlink);
    printf("Inode Number : %d\n",sobj.st_ino);
    printf("File system No : %d\n",sobj.st_dev);
    //printf("Number of Blocks  : %d\n",sobj.st_blocks);

}