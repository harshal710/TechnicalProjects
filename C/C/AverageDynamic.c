#include<stdio.h>
#include<stdlib.h>

int Average(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return ((float)iSum/(float)iSize);
}
int main()
{
    int iValue = 0;
    int *ptr = NULL;
    float fRet = 0.0f;
    int iCount = 0;

    printf("Enter the number of elements you want to enter :\n");
    scanf("%d",&iValue);

    ptr = (int*)malloc(iValue * sizeof(int));
    printf("Dynamic memory allocated for %d elements",iValue);

    for(iCount = 0; iCount < iValue; iCount++)
    {
        printf("\nEnter the element number %d :",iCount+1);
        scanf("%d",&ptr[iCount]);
    }

    fRet = Average(ptr,iCount);
    printf("Average is : %f\n",fRet);

    free(ptr);

    printf("Dynamic memory deallocated successfully..\n");

    return 0;

}