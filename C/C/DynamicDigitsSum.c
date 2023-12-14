#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    int iCount = 0;
    
    int iC = 0;

    for(iCount = 0; iCount < iLength; iCount++)
    {
       int iSum = 0;
       while(Arr[iCount] != 0)
       {
            iC = Arr[iCount] % 10;
            iSum = iSum + iC;
            Arr[iCount] = Arr[iCount] / 10;
            
       }
       printf("%d\t",iSum);
    }
}
int main()
{
    int iSize = 0;
    int iRet = 0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter the no.of elements:\n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    printf("Enter the %d elements:\n",iSize);

    for(iCnt =0 ; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    DigitsSum(p,iSize);

    free(p);

    return 0;
}