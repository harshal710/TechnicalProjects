//accept two values from user and perform the addition.

//step1: understand the problem statement
//conclusion: we have to accept two integers and perform addition.

// step 2: write the algo.
/*
    START
        accept the first number from user and store it into no 1
        accept the second number from user and store in no2
        create the variable to store the result named as ans
        perform the addition and store the result in ans
        display the result to user from ans
    STOP
*/

// step 3: decide the programming language(c,c++,java,python)
//we select c programming

//step 4: write the program


#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// Function name:    Addition                                           //
// Description:      It is used to perform addition of two integers     //
// Input arguments:  Integer , Integer                                  //
// Output:           Integer                                            //
// Author:           Harshal Suresh Patil                               //
// Date:             25/09/2023                                         //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

int Addition(int iNo1, int iNo2)
{
    int iSum=0;              //Variable to store the addition
    iSum = iNo1 + iNo2;
    return iSum;
}

//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
// Entry point function of an application which performs addition of 2 integers //
//                                                                              //
//////////////////////////////////////////////////////////////////////////////////
int main()
{

    int iValue1=0;          //Variable to store the first input
    int iValue2=0;          //Variable to store the second input
    int iAns=0;             //Variable to store the result

    printf("Enter the first number: \n");
    scanf("%d",&iValue1);

    printf("Enter the second number: \n");
    scanf("%d",&iValue2);

    iAns= Addition(iValue1, iValue2);    //Function call to perform addition

    printf("Addition is:%d\n",iAns);
    
    return 0;
}

// step 5: test the code
/*
test case 1:
input:10  11
output: 21

test case 2:
input:10  0
output: 10

test case 3:
input:12  -6
output: 6

test case 4:
input:-6  -5
output: -11
*/