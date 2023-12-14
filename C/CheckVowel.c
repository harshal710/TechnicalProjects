#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char CVow)
{
    if(CVow == 'a'|| CVow =='e' || CVow == 'i'|| CVow =='o' || CVow == 'u'|| CVow =='A' || CVow == 'E'|| CVow =='I' || CVow == 'O'|| CVow =='U')
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char cVow = '\0';
    bool bRet = false;

    printf("Enter character:\n");
    scanf("%c",&cVow);

    bRet = CheckVowel(cVow);

    if(bRet == true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}