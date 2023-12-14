#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCount = 0;
    int iMul = 1;

    for(iCount = 0; iCount < iLength; iCount++)
    {
        if((Arr[iCount] % 2) != 0)
        {
            iMul = iMul * Arr[iCount];
        }
        
    }
    return iMul;
}
int main()
{
    int iSize = 0;
    int iRet = 0;
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

    iRet = Product(p,iSize);

    printf("%d",iRet);

    free(p);

    return 0;

}