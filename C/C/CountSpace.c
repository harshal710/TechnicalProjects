#include<stdio.h>

int CountSpace(char str[])      //(char*str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
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

    iRet = CountSpace(Arr);

    printf("Count of whitespaces in string is : %d\n",iRet);

    return 0;
}