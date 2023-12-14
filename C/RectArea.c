#include<stdio.h>

double RectArea(float fWidth, float fHieght)
{
    float fArea = 0.0;
    fArea = fWidth * fHieght;
    return fArea;
}

int main()
{
    float fValue1 = 0.0;
    float fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter the width : \n");
    scanf("%f",&fValue1);

    printf("Enter the hieght :\n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of rectangle is : %f",dRet);

    return 0;
}
