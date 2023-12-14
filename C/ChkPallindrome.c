#include<stdio.h>
#include<stdbool.h>

int ChkPallindrome(int iNo)
{
    int iRev = 0;
    int iDigit = 0;
    int iCopy = iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }

    if(iRev == iCopy)
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

    bRet = ChkPallindrome(iValue);

    if(bRet == true)
    {
        printf("%d  is pallindrome\n",iValue);
    }
    else 
    {
        printf("%d is not a pallindrome\n",iValue);
    }

    return 0;
}