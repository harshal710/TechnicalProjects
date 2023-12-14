#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMul = 0;
    int iMul1 = 0;
    int iMul2 = 0;
    int iMul3 = 0;

    if(iNo1==0 && iNo2==0 && iNo3!=0)
    {
        iMul = (iNo1+1) * (iNo2+1) * iNo3;
        return iMul;
    }
    else if(iNo1!=0 && iNo2==0 && iNo3==0)
    {
        iMul1 = iNo1 * (iNo2+1) * (iNo3+1);
        return iMul1;
    }
    else if(iNo1==0 && iNo2!=0 && iNo3==0)
    {
        iMul2 = (iNo1+1) * iNo2 * (iNo3+1);
        return iMul2;
    }
    else
    {
        iMul3 = iNo1 * iNo2 * iNo3;
        return iMul3;
    }
    
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;

    printf("Enter the first number:\n");
    scanf("%d",&iValue1);

    printf("Enter the second number:\n");
    scanf("%d",&iValue2);

    printf("Enter the third number:\n");
    scanf("%d",&iValue3);

    iRet = Multiply(iValue1 ,iValue2 ,iValue3);

    printf("Multiplication is : %d",iRet);

    return 0;
}