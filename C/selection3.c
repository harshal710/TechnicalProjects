#include<stdio.h>

int main()
{
    int standard=0;
    printf("primary school portal\n");

    printf("enter your division:\n");
    scanf("%d",&standard);

    switch(standard)
    {
        case 1:
            printf("exam is at 1pm\n");
             break;    
        case 2:
            printf("exam is at 2pm\n");
             break;    
        case 3:
            printf("exam is at 3pm\n"); 
             break;     
        case 4:
            printf("exam is at 4pm\n");
             break;    
        default:
            printf("invalid standard\n");
            break;        
    }
   
    
    return 0;
}