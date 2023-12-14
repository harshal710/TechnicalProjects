#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = 'a';

    for(iCnt = 1 ;iCnt <= iNo;iCnt++)
    {
        printf("%c\t",ch);
        ch++;
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number to which alphabet to be printed :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}