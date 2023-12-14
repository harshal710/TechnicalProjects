#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 21)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{
    int iValue = 0;
    int iCount = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter the number of elements you want to enter :\n");
    scanf("%d",&iValue);

    ptr = (int*)malloc(iValue * sizeof(int));

    printf("Dynamic memory allocated for %d elements...\n",iValue);

    for(iCount = 0; iCount < iValue; iCount++)
    {
        printf("\nEnter the element number %d :",iCount+1);
        scanf("%d",&ptr[iCount]);
    }


    iRet = Frequency(ptr,iValue);

    printf("Frequency of 21 is : %d\n",iRet);

    free(ptr);

    printf("Dynamically allocated memory is deallocated...\n");
    
    return 0;
}