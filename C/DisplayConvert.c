#include<stdio.h>

void DisplayConvert(char CValue)
{
    printf("output character:\n");

    if(CValue >= 'a' && CValue <= 'z')
    {
        CValue = CValue - 32;
        printf("%c",CValue);
    }
    else if(CValue >= 'A' && CValue <= 'Z')
    {
        CValue = CValue + 32;
        printf("%c",CValue);
    }
    else
    {
        printf("Inavlid character entered!!");
    }
}

int main()
{
    char cValue ='\0';

    printf("Enter character:\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}
