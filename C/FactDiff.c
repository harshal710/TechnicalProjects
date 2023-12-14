#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumF = 0;
    int iSumNF = 0;
    int iDiff = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSumF = iSumF + iCnt;
        }
        else
        {
            iSumNF = iSumNF + iCnt;
        }
    }
    iDiff = iSumF - iSumNF;
    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("the difference between sum of factors and non factors is :\n%d",iRet);

    return 0;
}