#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;

        void Fun()      //Concrete method
        {
            cout<<"Base Fun\n";
        }
        virtual void Gun()      //Concrete method
        {
            cout<<"Base Gun\n";
        }
        virtual int Addition(int no1, int no2 )=0;      //Abstract method
};

class Derived : public Base
{
    public:
        int a,b;
        void Gun()  //Concrete method
        {
            cout<<"derived Gun\n";
        }
        virtual void Sun()      //Concrete method
        {
            cout<<"Derived Sun\n";
        }
        int Addition(int no1, int no2 )     //Concrete method
        {
            return no1 + no2;
        }
};

int main()
{
    // Base bobj;  compiler gives error for this as it is not possible to create object as the class is incomplete

    Base *bp = new Derived;
    bp->Fun();
    bp->Gun();
    int Ret = 0;
    Ret=bp->Addition(10,11);
    cout<<"Addition is: "<<Ret<<"\n";

    return 0;
}