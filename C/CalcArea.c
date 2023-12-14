// Problem statement: Accept radius from user and calculate area of circle

// step 1 : Understand the problem statement
//conclusion : We are going to use formula PI*Radius*Radius

//step 2: Algorithm
/*
    Start
        Accept radius from user and store into Radius
        Create variable as PI and store value 3.14
        Calculate area PI*Radius*Radius
        Display Area of circle
*/

#include<stdio.h>

///////////////////////////////////////////////////////////
//
//Function name:   CalculateArea
//Description:     It is used to calculate area of circle 
//input argument:  float ,float
//output:          float
//auther name:     Harshal Suresh Patil
//Date:            2/10/23
//
///////////////////////////////////////////////////////////

#define PI 3.14

float CalculateArea(float fValue)
{
    auto float fAns=0.0f;

    fAns = PI * fValue * fValue;
    return fAns;
}

////////////////////////////////////////////////////////////
//
//  Entry point function
//
///////////////////////////////////////////////////////////

int main()
{
    auto float fRadius=0.0f;
    auto float fArea=0.0f;

    printf("enter the radius of circle:\n");
    scanf("%f",&fRadius);

    fArea= CalculateArea(fRadius);

    printf("Area of circle is:%f\n",fArea);

    return 0;
}