#include<stdio.h>

int RangeSumEven(int iNo1 ,int iNo2)
{
    int iCnt = 0;
    int iSumEven = 0;
    int iSumEven1 = 0;

    if(iNo1 <= iNo2 && iNo1 > 0 && iNo2 > 0)
    {
        for(iCnt = iNo1; iCnt <= iNo2; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iSumEven = iSumEven + iCnt;
            }
        }
        return iSumEven;
    }
    else
    {
        printf("Invalid Range!!\n");
        iSumEven1 == 0;
        return iSumEven1;
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

    iRet = RangeSumEven(iValue1 ,iValue2);

    printf("Addition is : %d",iRet);

    return 0;
}