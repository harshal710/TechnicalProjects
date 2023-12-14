#include<stdio.h>

int KMtoMeter(int iNo)
{
    if(iNo  < 0)
    {
        iNo = -iNo;
    }

    int iCon = 0;
    iCon = iNo * 1000;
    return iCon;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the distance in kilometer : \n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("The distance in meter is : %d meters",iRet);

    return 0;
}