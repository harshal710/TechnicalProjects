#include<stdio.h>


int main()
{
    int No=0;
    int Ans=0;

    printf("enter the number:\n");
    scanf("%d",&No);

    Ans=No%2;
    if(Ans==0)
    {
        printf("number is even");
    }
    else{
        printf("number is odd");
    }
    
    return 0;
}