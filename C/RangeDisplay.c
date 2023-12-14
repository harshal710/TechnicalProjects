#include<stdio.h>

void RangeDisplay(int iNo1 ,int iNo2)
{
    int iCnt = 0;
    if(iNo1 <= iNo2)
    {
        for(iCnt = iNo1; iCnt <= iNo2; iCnt++)
        {
            printf("%d\t",iCnt);
        }
    }
    else
    {
        printf("Invalid Range!!");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the starting point :\n");
    scanf("%d",&iValue1);

    printf("Enter the ending point : \n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1 ,iValue2);

    return 0;
}