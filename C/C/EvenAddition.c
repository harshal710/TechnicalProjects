#include<stdio.h>   //for printf and scanf
#include<stdlib.h>  //for malloc and free 

int EvenAddition(int Arr[],int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iSum = iSum + Arr[iCnt];
        }
    } 
    return iSum;
    
}

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter the number of elements :\n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    printf("Dynamic memory gets allocated successfully for %d elements.....\n",iCount);

    printf("Enter the %d element :\n",iCount);

    for(int i = 0; i < iCount; i++)
    {
        printf("\nEnter the element no. %d :",i+1);
        scanf("%d",&ptr[i]);
    }

    iRet = EvenAddition(ptr,iCount);

    printf("%d is the addition of even numbers\n",iRet);

    free(ptr);

    printf("Dynamic memory gets deallocated successfully...\n");

    return 0;
}