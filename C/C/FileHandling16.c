#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char FileName[30];
    char Arr[100] = {'\0'};
    int fd = 0 , iRet = 0, iCnt = 0, i =0;

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

        while((iRet = read(fd,Arr,sizeof(Arr))) != 0)
        {
            for(i = 0; i < iRet; i++)
            {
                // printf("%c\n",Arr[i]);
                if(Arr[i] >= 'a' && Arr[i] <= 'z')
                {
                    iCnt++;
                }
            }
        }
        printf("File contains %d small letters in it\n",iCnt);

        close(fd);
    }
    
    return 0;
}