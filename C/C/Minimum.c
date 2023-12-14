#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMin = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    int iCount = 0;
    int *ptr = NULL;

    printf("Enter the number of elements you want to enter :\n");
    scanf("%d",&iValue);

    ptr = (int*)malloc(iValue * sizeof(int));

    printf("Dynamic memory allocated for %d elements...\n",iValue);

    for(iCount = 0; iCount < iValue; iCount++)
    {
        printf("\nEnter the element number %d :",iCount+1);
        scanf("%d",&ptr[iCount]);
    }

    iRet = Minimum(ptr,iValue);

    printf("Minimum is : %d\n",iRet);

    free(ptr);

    printf("Dynamically allocated memory is deallocated...\n");
    
    return 0;
}