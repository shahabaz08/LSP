/// get ppid 
// incomplete


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>



int main()
{
    int PID=0;
    int PPID=0;
    PID=getpid();
    printf("PID of runnig process is : %d\n",PID);

    PPID=getppid();
     printf("ppid of parent process is %d\n",PPID);

     return 0;
}

// parent is command prompt


/// apply ps command 
//asn ps -A command