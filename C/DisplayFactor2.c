#include<stdio.h>
#include<stdbool.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    printf("Factors of %d are :\n",iNo);
    
    for(iCnt=1 ; iCnt<= (iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\n",iCnt);
        }
       
    }
}

int main()
{
    int iValue = 0;

    printf("Enter first number :\n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}
// Time Complexity O(N/2)