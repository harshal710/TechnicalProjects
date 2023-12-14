#include<iostream>
using namespace std;

class Base
{
    public:
        int i , j ,k;
        virtual void Fun()     //1000
        {
            cout<<"Inside Base Fun\n";
        }
        virtual void Gun()    //2000
        {
            cout<<"Inside Base Gun\n";
        }
        void Sun()     //3000
        {
            cout<<"Inside Base Sun\n";
        }
        void Run()     //4000
        {
            cout<<"Inside Base Run\n";
        }
};

class Derived : public Base
{
    public:
        int a , b;
        virtual void Gun()     //5000
        {
            cout<<"Inside Derived Gun\n";
        }
        void Run()     //6000
        {
            cout<<"Inside Derived Run\n";
        }
        virtual void Mun()     //7000
        {
            cout<<"Inside derived Mun\n";
        }
};

int main()
{
    cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derived)<<"\n";

    Base *bp = new Derived;
    bp->Fun();
    bp->Gun();
    bp->Run();
    bp->Sun();
    //bp->Mun();        //Error

    return 0;
}

// in the above program since virtual is introduced the functions in the base class in front of which virtual is used
// ...for that function compiler first check for the function in derived class if its there then it ges overridden