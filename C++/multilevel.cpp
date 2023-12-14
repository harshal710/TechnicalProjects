#include<iostream>
using namespace std;

class Demo
{
    public:
    int x,y;

    Demo()
    {
        x=10;
        y=20;
        cout<<"inside Demo constructor\n";
    }
    ~Demo()
    {
        cout<<"inside destructor\n";
    }
    void Fun()
    {
        cout<<"inside fun of Demo\n";
    }

};

//class Hello extends Demo
class Hello : public Demo
{
    public:
    int a,b,c;
    Hello()
    {
        a=30;
        b=40;
        c=50;
        cout<<"inside hello constructor\n";
    }
    ~Hello()
    {
        cout<<"inside hello destructor\n";
    }
    void gun()
    {
        cout<<"inside gun of hello\n";
    }
};

class Marvellous : public Hello
{
    public:
        int p;

        Marvellous()
        {
            p=60;
            cout<<"inside marvellous constructor\n";
        }
        ~Marvellous()
        {
            cout<<"inside marvellous destructor\n";
        }
        void sun()
        {
            cout<<"inside sun of marvellous\n";
        }
};

int main()
{
    Marvellous mobj;

    cout<<"size of :"<<sizeof(mobj)<<"bytes\n";   //24

    cout<<mobj.x<<"\n";
    cout<<mobj.y<<"\n";
    cout<<mobj.a<<"\n";
    cout<<mobj.b<<"\n";
    cout<<mobj.c<<"\n";
    cout<<mobj.p<<"\n";

    mobj.Fun();
    mobj.gun();
    mobj.sun();

    return 0;
}