/// Largest File int directory



#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<unistd.h>
#include<dirent.h>
#include<sys/stat.h>
#pragma pack(1)

struct FileInfo
{
    char Filename[20];
    int FileSize;
};

int main(int argc,char * argv[])
{
    char DirName[20];
    DIR * dp=NULL;
    struct dirent * entry=NULL;
    char name[30];
    char namecopy[30]={ '\0'};
    struct stat sobj;
    int iMax=0;
    int fd=0;


    struct FileInfo fobj;
    dp=opendir(DirName);
    if(dp==NULL)
    {
        printf("Unable to open directory...\n");
    }
    
    fd= creat("FileCombine.txt",0777);

    while((entry=readdir(dp))!=NULL)
    {
        if(S_ISREG(sobj.st_mode));
        sprintf("%s/%s",DirName,entry->d_name);
        stat(name,&sobj);
        
        if(S_ISREG(sobj.st_mode));
        {
            fobj.FileSize=sobj.st_size;
            strcpy(fobj.Filename,entry->d_name);
            write(fd,&fobj,sizeof(fobj));
        }

    }
    printf("Name of largest file: %s with size %d bytes \n",namecopy,iMax);
    closedir(dp);
    return 0;
}