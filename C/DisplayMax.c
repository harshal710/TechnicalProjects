#include<stdio.h>

int DisplayMax(int iNo1, int iNo2)
{
    if(iNo1>iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}

int main()
{
    auto int iValue1=0;
    auto int iValue2=0;
    int iRet=0;

    printf("Enter the value 1:\n");
    scanf("%d",&iValue1);

    printf("Enter the value 2:\n");
    scanf("%d",&iValue2);

    iRet=DisplayMax(iValue1,iValue2);

    printf("Greater value is: %d");
    
    return 0;

}