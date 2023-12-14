#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize ,int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
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
    int iFreq = 0;

    printf("Enter the number of elements you want to enter :\n");
    scanf("%d",&iValue);

    ptr = (int*)malloc(iValue * sizeof(int));

    printf("Dynamic memory allocated for %d elements...\n",iValue);

    for(iCount = 0; iCount < iValue; iCount++)
    {
        printf("\nEnter the element number %d :",iCount+1);
        scanf("%d",&ptr[iCount]);
    }


    printf("Enter the element whoes frequency is to be calculated :\n");
    scanf("%d",&iFreq);

    iRet = Frequency(ptr,iValue,iFreq);

    printf("Frequency of %d is : %d\n",iFreq,iRet);

    free(ptr);

    printf("Dynamically allocated memory is deallocated...\n");
    
    return 0;
}