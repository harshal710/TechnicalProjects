#include<stdio.h>

int  addition(int value1,int value2)
{
    int sum=0;
    sum=value1+value2;
    return sum;
}
int main()
{
    int a=0,b=0;
    int ret=0;
    
    printf("enter the value of A=\n ");
    scanf("%d",&a);
    printf("enter the value of B=\n ");
    scanf("%d",&b);
    ret=addition(a,b);
    printf("addition is=%d",ret);


    return 0;
}