#include<stdio.h>   //for printf and scanf
#include<stdlib.h>  //for malloc and free 

void Display(int Arr[],int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\t",Arr[iCnt]);
    }
    printf("\n");
}

int main()
{
    int iCount = 0;
    int *ptr = NULL;

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

    Display(ptr,iCount);

    free(ptr);

    printf("Dynamic memory gets deallocated successfully...\n");

    return 0;
}