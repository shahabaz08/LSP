#include<stdio.h>
#include<fcntl.h>
#include<string.h>

int main(int argc,char *argv[])
{
    int fd=0;
    int Mode=0;
    printf("Usage:NAme_Of_Executable file NAme_of_file Mode_Of_Open\n");


    if(argc !=3)
    {
        printf("Invalid No of arguments :\n");
        return -1;
    }
    if(strcmp(argv[2],"Read")==0)
    {
        Mode=O_RDONLY;
    }
    else if(strcmp(argv[2],"Write")==0)
    {
        Mode=O_WRONLY;
    }
    else
    {
        Mode=O_RDONLY;
    }

    fd=open(argv[1],Mode);
    if(fd==-1)
    {
        printf("Unable to open file");
        return -1;
    }
    else
    {
        printf("File created with fd : %d",fd);

    }

    return 0;
}



/// use ouput .txt

// Also use output.txt
// command _ exe output.txt write
