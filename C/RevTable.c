#include<stdio.h>

void RevTable(int iNo)
{
    int iCnt = 0;
    int iRev = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    printf("Table of %d is :\n",iNo);

    for(iCnt =10; iCnt >= 1; iCnt--)
    {
        iRev = iNo * iCnt;
        printf("%d\t",iRev);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    RevTable(iValue);

    return 0;
}