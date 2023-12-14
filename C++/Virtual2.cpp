#include<iostream>
using namespace std;

class Base
{
    public:
        int i , j ,k;
        void Fun()
        {
            cout<<"Inside Base Fun\n";
        }
};

class Derived : public Base
{
    public:
        int a , b;
        void Gun()
        {
            cout<<"Inside Derived Gun\n";
        }
};

int main()
{
    Base *bp1 = new Base;           //nocasting
    Derived *dp1 = new Derived;     //nc
    Base *bp2 = new Derived;        //uc
    // Derived *dp2 = new Base;        //dc .....down casting not allowed by compiler

    return 0;
}
