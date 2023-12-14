#include<stdio.h>

int CheckChar(char str[], char cNo)      //(char*str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == 'cNo')
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
    char cValue = '\0';

    printf("Enter the string :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character:\n");
    scanf(" %c",&cValue);   // space added before %c is given delibratly to flush the enter which is carried from earleir scanf

    iRet = CheckChar(Arr,cValue);

    printf("Count of %c in string is : %d\n",cValue,iRet);

    return 0;
}