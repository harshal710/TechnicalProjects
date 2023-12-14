#include<iostream>
using namespace std;

class Demo
{
    public:
        int i,j,k;
        Demo()
        {
            cout<<"Inside constructor\n";
        }
        ~Demo()
        {
            cout<<"Inside destructor\n";
        }
        void Display()
        {
            cout<<"Inside display\n";
        }
};

int main()
{
    Demo obj1;
    obj1.Display();

    Demo *ptr = new Demo;
    //Demo *ptr = (Demo*)malloc(sizeof(Demo));

    ptr->Display();

    delete ptr;
    //free(ptr);
    
    
    return 0;
}