#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    int fd  = 0;
    char Arr[] =  "PREPLACEMENT ACTIVITY";
    int Ret = 0;
    fd = open("Marvellous.txt",O_RDWR| O_APPEND);

    Ret = write(fd,Arr,22);
                     //Strlen(Arr)
    printf("%d bytes get written in file\n",Ret);

    close(fd);

    return 0;
}


// O_RDONLY = Read
// O_WRONLY  = Write
// O_RDWR = Read + Write