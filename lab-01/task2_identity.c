#include<stdio.h>
#include<unistd.h>

intmain(){
//GetcurrentProcessID
    pid_tmy_pid=getpid();

//GetParentProcessID
    pid_tmy_ppid=getppid();

    printf("MyPIDis:%d\n",my_pid);
    printf("MyParentPIDis:%d\n",my_ppid);

    printf("Sleepingfor20seconds...\n");
    sleep(20);

return0;
}
