#include<stdio.h>

int addition(int no1,int no2)
{
    int sum=0;
    sum=no1+no2;
    return sum;
}

int main()
{
    int value1=10;
    int value2=20;
    int ans=0;

    ans=addition(value1,value2);

    printf("addition is: %d\n",ans);

    return 0;
}