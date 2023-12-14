#include<stdio.h>
#include<stdbool.h>

bool CheckGreater(int iNo)
{
    if(iNo >= 100)
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    bRet = CheckGreater(iValue);

    if(bRet == true)
    {
        printf("Entered Number is Greater!!");
    }
    else
    {
        printf("Entered Number is Smaller!!");
    }
    return 0;
}