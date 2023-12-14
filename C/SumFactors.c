#include<stdio.h>
#include<stdbool.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum=0;

    printf("Factors of %d are :\n",iNo);
    
    for(iCnt=1 ; iCnt<= (iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
            printf("%d\n",iCnt);
        }
       
    }
    return iSum;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter first number :\n");
    scanf("%d",&iValue);

    iRet=SumFactors(iValue);
    printf("Sum of factors is : %d",iRet);

    return 0;
}
// Time Complexity O(N/2)