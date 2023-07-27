// get pid 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>



int main()
{
    int PID=0;
    PID=getpid();

    printf("PID of runnig process is : %d\n",PID);

    return 0;
}



/// apply ps command 
//asn ps -A command