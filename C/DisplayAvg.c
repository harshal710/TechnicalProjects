#include<stdio.h>

int DisplayAvg(int iNo1, int iNo2, int iNo3)
{
    
   float fAvg=((float)(iNo1+iNo2+iNo3)/3);
   return fAvg;
}

int main()
{
    auto int iValue1=0;
    auto int iValue2=0;
    auto int iValue3=0;
    float fRet=0.0f;

    printf("Enter the value 1:\n");
    scanf("%d",&iValue1);

    printf("Enter the value 2:\n");
    scanf("%d",&iValue2);

    printf("Enter the value 3:\n");
    scanf("%d",&iValue3);

    fRet=DisplayAvg(iValue1,iValue2,iValue3);

    printf("Average is value is: %f",fRet);
    
    return 0;

}