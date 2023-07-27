#include<stdio.h>
#include<fcntl.h>

int main(int argc,char *argv[])
{
    char Fname[20];
    int fd=0;
    printf("Enter the filename that u want to open :\n");
    scanf("%s",Fname);

    fd=open(Fname,O_RDONLY);

    if(fd==-1)
    {
        printf("Unable to oprn file:\n");
        return -1;
    }
    else 
    {
        printf("File is created successfully with fd %d\n",fd);
    }

    return 0;
}


// o_rdonly
//o_rdwr
//o_Wronly
//o_Create
