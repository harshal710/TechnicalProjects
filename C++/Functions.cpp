#include<stdio.h>

void Fun_Value(int iNo)
{
    iNo++;
}
void Fun_Address(int *ptr)
{
    (*ptr)++;
}
void Fun_Reference(int &ref)
{
    ref++;
}

int main()
{
    int i = 10, j = 10, k = 10;

    Fun_Value(10);
    Fun_Address(&j);
    Fun_Reference(k);

    printf("CAll by value : i %d\n",i);
    printf("CAll by Address : j %d\n",j);
    printf("CAll by Reference : k %d\n",k);
    
    return 0;
}