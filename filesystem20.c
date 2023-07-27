
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<unistd.h>
#include<dirent.h>
#include<sys/stat.h>


int main(int argc,char * argv[])
{
    char DirName[20];
    DIR * dp=NULL;
    struct dirent * entry=NULL;
    char name[30];
    struct stat sobj;

    printf("Enter the name of directory:\n");
    scanf("%s",&DirName);
    dp=opendir(DirName);
    if(dp==NULL)
    {
        printf("Unable to open directory...\n");
    }

    while((entry=readdir(dp))!=NULL)
    {
        if(S_ISREG(sobj.st_mode));
        sprintf("%s/%s",DirName,entry->d_name);
        stat(name,&sobj);
        
        if(S_ISREG(sobj.st_mode));
        {
            printf("File name : %s FIle size : %d\n",name,sobj.st_size);

        }

    }
    closedir(dp);
    return 0;
}