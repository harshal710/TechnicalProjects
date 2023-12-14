#include<iostream>
using namespace std;

class Demo   //class defination
{
    public:
        int i;
        int j;

        Demo()   //default constructor
        {
            cout<<"inside default constructor\n";
            i=0;
            j=0;
        }

        Demo(int A,int B)  //parameterised constructor
        {
            cout<<"inside parameterised constructor\n";
            i=A;
            j=B;
        }

        Demo(Demo &ref)  //copy constructor
        {
            cout<<"inside copy constructor\n";
            i=ref.i;
            j=ref.j;
        }

        ~Demo()
        {
            cout<<"inside the destructor\n";
        }
};

int main()
{
    Demo obj1;
    Demo obj2(11,21);
    Demo obj3(obj2);

    return 0;
}