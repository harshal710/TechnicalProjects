#include<stdio.h>

double FhtoCs(int iNo)
{
    float fCon = 0.0;
    fCon = (iNo - 32) * (5/9);
    return fCon;
}

int main()
{
    int iValue = 0.0;
    double dRet = 0.0;

    printf("Enter the temperature in fahrenheit : \n");
    scanf("%d",&iValue);

    dRet = FhtoCs(iValue);

    printf("The temperature in celsius is : %f C",dRet);

    return 0;
}