#include<stdio.h>

int DisplayMax(int iNo1, int iNo2, int iNo3)
{
    if(iNo1>=iNo2&& iNo1>=iNo3)
    {
        return iNo1;
    }
    else if(iNo2>=iNo1 && iNo2>=iNo3)
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
}

int main()
{
    auto int iValue1=0;
    auto int iValue2=0;
    auto int iValue3=0;
    int iRet=0;

    printf("Enter the value 1:\n");
    scanf("%d",&iValue1);

    printf("Enter the value 2:\n");
    scanf("%d",&iValue2);

    printf("Enter the value 3:\n");
    scanf("%d",&iValue3);

    iRet=DisplayMax(iValue1,iValue2,iValue3);

    printf("Greater value is: %d",iRet);
    
    return 0;

}