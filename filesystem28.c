//ASS 3 or 4
// acess function

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>



int main(int argc,char * argv[])
{
    int mode;
    if(argc !=3)
    {
        printf("Invald arguments");
        return -1;
    }
    if(strcmp(argv[2],"read")==0)
    {
        mode=R_OK;
    }
    else if(strcmp(argv[2],"write")==0)
    {
        mode=W_OK;
    }
    else if (strcmp(argv[2],"execute")==0)
    {
        mode=X_OK;
    }

    if(access(argv[1],mode <0))
    {
        printf("Unamble to access %s file in %s \n",argv[1],argv[2]);
    }
    else
    {
        printf("You can access %s file in %s mode \n",argv[1],argv[2]);

    }

    return 0;
}

// access return is negative if no premission and 0 if have permisssion 
