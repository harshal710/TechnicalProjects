#include<stdio.h>

int DollarToInr(int iNo)
{
    int iCon = 0;
    iCon = iNo * 70;
    return iCon;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the amount in Dollar : \n");
    scanf("%d",&iValue);

    iRet = DollarToInr(iValue);

    printf("Amount in Inr is : %d Rs",iRet);

    return 0;
}