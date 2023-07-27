#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<unistd.h>

#pragma pack(1)

struct student
{
    int  RollNo;
    char Sname[20];
    float marks;
    int Age;
};

int main(int argc,char *argv[])
{
    struct student sobj;
    char Fname[20];
    int fd=0;

    printf("Enter the filename");
    scanf("%s",Fname);

    fd=creat(Fname,O_RDONLY);

    read(fd,&sobj,sizeof(sobj));
    printf("Roll No :%d\n",sobj.RollNo);
    printf("Name :%d\n",sobj.RollNo);
    printf("Marks :%f\n",sobj.RollNo);
    printf("Age :%d\n",sobj.RollNo);
    close (fd);


    return 0;
}