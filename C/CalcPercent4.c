#include<stdio.h>

void Result( float fpercentage)
{
    if((fpercentage>0.00) && (fpercentage<35.00))
    {
        printf("failed!!");
    }
    else if((fpercentage>=35.00) && (fpercentage<50.00))
    {
        printf("pass!!");
    }
    else if((fpercentage>=50.00) && (fpercentage<60.00))
    {
        printf("second class!!");
    }
    else if((fpercentage>=60.00) && (fpercentage<75.00))
    {
        printf("first class!!");
    }
     else if((fpercentage>=75.00) && (fpercentage<=100.00))
    {
        printf("first class with distinction!!");
    }
    else
    {
        printf("invalid input!!");
    }

}
int main()
{
    auto float fValue=0.0f;

    printf("Enter the percentage:\n");
    scanf("%f",&fValue);

    Result(fValue);

    return 0;
}