#include<stdio.h>

int DisplayMin(int iNo1, int iNo2)
{
    if(iNo1<iNo2)
    {
        return iNo2;
    }
    else
    {
        return iNo1;
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

    iRet=DisplayMin(iValue1,iValue2);

    printf("smaller value is: %d");
    
    return 0;

}