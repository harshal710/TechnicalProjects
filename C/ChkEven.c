//Problem statement: Take the number from user and check whether the number is odd or even

/*
    START
        Accept number from user
        Divide that number by 2
        If remainer is 0 then display Even
        Otherwise Display Odd
    STOP
*/
#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    bRet=CheckEven(iValue);
    if(bRet==true)
    {
        printf("%d is an Even number\n",iValue);
    }
    else
    {
        printf("%d is an Odd number\n",iValue);
    }
    return 0;
}