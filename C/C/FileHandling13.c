#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFERSIZE 1024;

int main()
{
    char FileName[30];
    char Arr[100] = {'\0'};
    char Brr[100] = {'\0'};
    int fd = 0 , iRet = 0;

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

        iRet = read(fd,Arr,10);

        printf("%d Bytes gets successfully read from file\n",iRet);

        printf("Data from file is : %s\n",Arr);

        iRet = read(fd,Brr,12);

        printf("%d Bytes gets successfully read from file\n",iRet);

        printf("Data from file is : %s\n",Brr);

        close(fd);
    }
    
    return 0;
}