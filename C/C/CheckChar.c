#include<stdio.h>

int CheckChar(char str[])      //(char*str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == 'a')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^'\n']s",Arr);

    iRet = CheckChar(Arr);

    printf("Count of a in string is : %d\n",iRet);

    return 0;
}