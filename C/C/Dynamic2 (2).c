#include<stdio.h>   //for printf and scanf
#include<stdlib.h>  //for malloc and free 

int main()
{
    int iCount = 0;
    int *ptr = NULL;

    printf("Enter the number of elements :\n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the element :\n");
    // scanf("%d",&ptr[0]);
    // scanf("%d",&ptr[1]);
    // scanf("%d",&ptr[2]);
    // scanf("%d",&ptr[3]);

    for(int i = 0; i < iCount; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Your entered elements are :\n");
    for(int i = 0; i < iCount; i++)
    {
        printf("%d\t",ptr[i]);
    }
    printf("\n");

    return 0;
}