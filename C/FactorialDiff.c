#include<stdio.h>

int FactorialDiff(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iMulE = 1;
    int iMulO = 1;
    int iDiff = 0;

    for(iCnt =1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iMulE = iMulE * iCnt;
        }
        else
        {
             iMulO = iMulO * iCnt;
        }
    }
    iDiff = iMulE - iMulO;
    return iDiff;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enetr the number : \n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is : %d",iRet);

    return 0;
}