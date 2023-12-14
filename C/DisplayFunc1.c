#include<stdio.h>

void DisplayExamTime(int iStandard)
{
    switch (iStandard)
    {
        case 1:
            printf("your exam is at 8AM..\n");
            break;
        case 2:
            printf("your exam is at 9AM..\n");
            break;
        case 3:
            printf("your exam is at 10AM..\n");
            break;
        case 4:
            printf("your exam is at 11AM..\n");
            break;
        case 5:
            printf("your exam is at 12 NOON..\n");
            break;
        default:
            printf("wrong input!!\n");
    }
}

int main()
{
    auto int iValue=0;

    printf("Enter the standard:\n");
    scanf("%d",&iValue);

    DisplayExamTime(iValue);

    return 0;

}