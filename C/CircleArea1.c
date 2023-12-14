#include<stdio.h>


double CircleArea(float fRadius)
{
    float PI = 3.14;
    double dArea = 0.0;
    dArea = PI * fRadius * fRadius;
    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter the radius :\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is : %f",dRet);

    return 0;
}