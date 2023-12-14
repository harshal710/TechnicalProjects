#include<stdio.h>

float Percentage(float No1, float No2)
{
    float fCalc = 0.0f;
    float fCalc1 = 0.0f;
    if( 0 <= No1 && No1 <= No2)
    {
        fCalc = (No1/No2)*100 ;
        return fCalc;
    }
    else
    {
        printf("Invalid input!!\n");
        fCalc1 = 0.0;
        return fCalc1;
    }
}

int main()
{
    int iMarks = 0;
    int iTotal = 0;
    float fRet = 0.0;

    printf("Enter the marks obtained :\n");
    scanf("%d",&iMarks);

    printf("Enter the total marks:\n");
    scanf("%d",&iTotal);

    fRet = Percentage(iMarks,iTotal);
    
    printf("Obtained percentage :\n%f% ",fRet);
    
    return 0;
}