#include<stdio.h>
#include<fcntl.h>

int main(int argc,char *argv[])
{
    int fd=0;
    if(argc !=2)
    {
        printf("Invalid No of arguments :\n");
        return -1;
    }

    fd=open(argv[1],O_RDONLY);
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