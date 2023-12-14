#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int iCount = 0;

    for(iCount = 0; iCount < iLength; iCount++)
    {
        if(Arr[iCount] == iNo)
        {
            return iCount;
            break;
        }
        
    }
}
int main()
{
    int iSize = 0;
    int iRet = 0;
    int iValue = 0;
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

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet = FirstOcc(p,iSize,iValue);
    
    if(iRet == -1)
    {
        printf("Their is no such number\n");
    }

    else
    {
        printf("First occurence of number is %d ",iRet);
    }

    free(p);

    return 0;

}