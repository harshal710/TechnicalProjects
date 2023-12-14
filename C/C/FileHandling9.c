#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


int main()
{
    char FileName[30];
    int fd = 0;

    printf("Enter the file name that you want to open from CD :\n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open %s file\n",FileName);
    }
    else
    {
        printf("%s gets opened successfully with descriptor %d\n",FileName,fd);
        close(fd);
    }
    
    return 0;
}