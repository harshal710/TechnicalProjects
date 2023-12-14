#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo == -iNo;
    }

    printf("Enetered number of Even numbers:\n");
    
    for(iCnt = 0; iCnt <=(iNo*2); iCnt++)
    {
        if((iNo / 2) == 0)
        {
            printf("%d",iNo);
        }
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}