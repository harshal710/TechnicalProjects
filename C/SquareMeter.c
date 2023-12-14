#include<stdio.h>

double SquareMeter(int ifeet)
{
    float fmeter = 0.0;
    fmeter = ifeet * 0.0929;
    return fmeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter the value in sq.feet : \n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("The value in sq.meter : %f",dRet);

    return 0;
}