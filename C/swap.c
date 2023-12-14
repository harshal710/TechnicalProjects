#include<stdio.h>

int main()
{
    int a=10,b=20,c;
    printf("the value of a=%d and b=%d\n ",a,b);
    c=a;
    a=b;
    b=c;
    printf("after swapping....");
    printf("a=%d\nb=%d",a,b);
    return 0;
}