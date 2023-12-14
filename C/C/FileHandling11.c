#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


int main()
{
    char FileName[30];

    printf("Enter the file name that you want to delete from CD :\n");
    scanf("%s",FileName);

    unlink(FileName);
    return 0;
}