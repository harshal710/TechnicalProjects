#include<stdio.h>
#include<stdlib.h>
 
void Display(int Arr[], int iLength)
{
    int iCount = 0;
    
    for(iCount = 0; iCount < iLength; iCount++)
    {
        if(Arr[iCount] % 5 == 0)
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

    printf("Enter the number of elemnts :\n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory..\n");
        return -1;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("\nEnter the element number %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    Display(p,iSize);

    free(p);

    return 0;

}