#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


int main()
{
    char FileName[30];
    int fd = 0;

    printf("Enter the file name that you want to create into CD :\n");
    scanf("%s",FileName);

    fd = creat(FileName,0777);

    if(fd == -1)
    {
        printf("Unable to creat %s file\n",FileName);
    }
    else
    {
        printf("%s gets created successfully with descriptor %d\n",FileName,fd);
    }
    
    return 0;
}