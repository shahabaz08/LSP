#include<stdio.h>
#include<fcntl.h>


int main(int argc,char *argv[])
{
    int fd=0;
    printf("Usage:NAme_Of_Executable file NAme_of_file \n");


    fd=creat(argv[1],777);
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
