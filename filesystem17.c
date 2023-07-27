//which type of file ????

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

    if(S_ISREG(sobj.st_mode))
    {
        printf("its a reagular file \n\n");
    }
    else if(S_ISDIR(sobj.st_mode))
    {
        printf("Its a Directoty");
    }
     else if(S_ISLink(sobj.st_mode))
    {
        printf("Its a Directoty");
    }

}