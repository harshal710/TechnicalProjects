#include<stdio.h>

int RangeSum(int iNo1 ,int iNo2)
{
    int iCnt = 0;
    int iSum = 0;
    int iSum1 = 0;
    if(iNo1 <= iNo2 && iNo1 > 0 && iNo2 > 0)
    {
        for(iCnt = iNo1; iCnt <= iNo2; iCnt++)
        {
            iSum = iSum + iCnt;
        }
        return iSum;
    }
    else
    {
        printf("Invalid Range!!\n");
        iSum1 == 0;
        return iSum1;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter the starting point :\n");
    scanf("%d",&iValue1);

    printf("Enter the ending point : \n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1 ,iValue2);

    printf("Addition is : %d",iRet);

    return 0;
}