#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCount = 0;

    for(iCount = 0; iCount < iLength; iCount++)
    {
        if(Arr[iCount] == iNo)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }
}
int main()
{
    int iSize = 0;
    BOOL bRet = FALSE;
    int iValue = 0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    printf("Enter the elements: \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the number whose frequency is to be calculated :\n");
    scanf("%d",&iValue);

    bRet = Check(p,iSize,iValue);
    
    if(bRet == TRUE)
    {
        printf("Number is present");
    }

    else
    {
        printf("Number is not present");
    }

    free(p);

    return 0;

}