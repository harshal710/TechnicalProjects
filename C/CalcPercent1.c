#include<stdio.h>

int CalculatePercentage(float fMarks,float fTotal)
{
    auto float fRes;

    if(fMarks>fTotal)     //Filter
    {
        printf("Invalid input\n:");
        return fRes;
    }

    fRes = (fMarks/fTotal)*100;
    return fRes;

}

int main()
{
    auto int iValue1=0;
    auto int iValue2=0;
    auto float fRet=0.0f;

    printf("Enter the marks:\n");
    scanf("%d",&iValue1);

    printf("Enter the total:\n");
    scanf("%d",&iValue2);

    fRet=CalculatePercentage(iValue1, iValue2);

    printf("Your percentage is: %f\n",fRet);
    
    return 0;
}
