#include<stdio.h>   //for printf and scanf
#include<stdlib.h>  //for malloc and free 

void Display(int*Arr,int iSize)
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

    printf("Enter the element :\n");

    for(int i = 0; i < iCount; i++)
    {
        scanf("%d",&ptr[i]);
    }

    Display(ptr,iCount);

    return 0;
}