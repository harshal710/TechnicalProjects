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

int main()
{
    Hello hobj;

    cout<<"size of :"<<sizeof(hobj)<<"\n";   //20

    cout<<hobj.x<<"\n";
    cout<<hobj.y<<"\n";
    cout<<hobj.a<<"\n";
    cout<<hobj.b<<"\n";
    cout<<hobj.c<<"\n";

    hobj.Fun();
    hobj.gun();

    return 0;
}