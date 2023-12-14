#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMax = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}
int main()
{
    int iValue = 0;
    int *ptr = NULL;
    int iRet = 0;
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

    iRet = Maximum(ptr,iCount);
    printf("Maximum is : %d\n",iRet);

    free(ptr);

    printf("Dynamic memory deallocated successfully..\n");

    return 0;

}