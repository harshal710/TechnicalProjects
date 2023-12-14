#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCount = 0;

    for(iCount = 0; iCount < iLength; iCount++)
    {
        if((Arr[iCount] % 11) == 0 )
        {
            printf("%d\t",Arr[iCount]);
        }
    }
}
int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter the number of elements :\n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    printf("Enter the elements :\n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    Display(p,iSize);

    free(p);

    return 0;
}