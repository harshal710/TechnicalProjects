#include<stdio.h>

int addition(int no1,int no2)
{
    int sum=0;
    sum=no1+no2;
    return sum;
}
int substraction(int data1,int data2)
{
    int res=0;
    res=data1-data2;
    return res;
}
int multiplication(int mul1,int mul2)
{
    int ins=0;
    ins=mul1*mul2;
    return ins;
}
int main()
{
    int value1=10;
    int value2=20;
    int ans=0;

    ans=addition(value1,value2);
    printf("addition is: %d\n",ans);

    ans=substraction(value1,value2);
    printf("substraction is: %d\n",ans);

    ans=multiplication(value1,value2);
    printf("multiplication is: %d\n",ans);

    return 0;
}