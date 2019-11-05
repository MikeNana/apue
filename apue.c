#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(void)
{
    printf("uid = %d, pid = %d, gid = %d", getuid(), getpid(), getgid());
    exit(0); 
}