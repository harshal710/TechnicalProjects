#include<iostream>
using namespace std;

class Demo
{
    public:
    int i ;
    int j ;
    int k ;

//Demo (Demo*this,int a=10,int b=20,int c=30)
    Demo(int a=10, int b=20, int c=30)
    {
        cout<<"value of this is :"<< this <<"\n";
        i=a;
        j=b;
        k=c;
    }

    void Fun(int No1, int No2)
    {
        cout<<"inside the fun \n";
        cout<<"value of i="<<this->i<<"\n";
        cout<<"value of j="<<this->j<<"\n";
        cout<<"value of k="<<this->k<<"\n";
        cout<<"value of this pointer is"<< this <<"\n";
    }

    void Display()
    {
        cout<<"inside Display\n";
        cout<<"value of this pointer is :"<< this <<"\n";
    }
};

int main()
{
    Demo obj1;
    Demo obj2(11,21,51);

    obj1.Fun(5,6);  //Fun(&obj1,5,6);
                    //Fun(100,5,6);

    obj2.Fun(8,9);  //Fun(&obj2,8,9);
                    //Fun(200,8,9);

    obj1.Display();  //display(&obj1);
                     //display(100);

    obj2.Display();  //display(&obj2);
                     //display(200);
    
    return 0;

}