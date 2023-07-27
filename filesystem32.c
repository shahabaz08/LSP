// change name 1.txt ,2.txt, 3.txt

/// program  38 in mail

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<dirent.h>


int main(int argc,char * argv[])
{
    DIR * dp=NULL;
    struct dirent * entry =NULL;
    char oldname[50];
    char newname[50];   
    int iCnt=0;
    dp=opendir(argv[1]);
    if(dp==NULL)
    {
        printf("Unable to oprn file \n\n");
    }

    while((entry=readdir(dp))!=NULL)
    {
        sprintf(oldname,"%s%s",argv[1],entry->d_name);
         sprintf(newname,"%s/%d.txt",argv[2],iCnt);

         rename(oldname,newname);
         iCnt++;
    }
    
    return 0;
}