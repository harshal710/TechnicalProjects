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
         void Gun()
        {
            cout<<"Inside Base Gun\n";
        }
        void Sun()
        {
            cout<<"Inside Base Sun\n";
        }
        void Run()
        {
            cout<<"Inside Base Run\n";
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
        void Run()
        {
            cout<<"Inside Derived Run\n";
        }
};

int main()
{
    Base *bp = new Derived;
    bp->Fun();
    bp->Gun();
    bp->Run();
    bp->Sun();


    return 0;
}

// since while displaying the output the derived did not got checked in this program...so it is need that virtual to be added 
// ...to check the derived class also