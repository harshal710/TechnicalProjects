#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char FileName[30];
    char Arr[100] = {'\0'};
    int fd = 0 , iRet = 0;

    printf("Enter the file name that you want to open from CD :\n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open %s file\n",FileName);
    }
    else
    {
        printf("%s gets opened successfully with descriptor %d\n",FileName,fd);

        printf("Enter the data that you want to write in file :\n");
        scanf(" %[^'\n']s",Arr);

        iRet = write(fd,Arr,strlen(Arr));

        printf("%d Bytes gets successfully written into file\n",iRet);

        close(fd);
    }
    
    return 0;
}