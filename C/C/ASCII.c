#include<stdio.h>

int main()
{
    char ch = '\0';

    printf("Enter the character :\n");
    scanf("%c",&ch);

    printf("ASCII value of character in DECIMAL is : %d\n",ch);

    printf("ASCII value of character in OCTAL is : %o\n",ch);

    printf("ASCII value of character in HEXADECIMAL is : %x\n",ch);
    return 0;
}