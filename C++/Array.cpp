#include<iostream>
using namespace std;

class Array
{
    private:
        int *Arr;      //int  Arr[];
        int iSize;

    public:
        Array(int x)
        {
            iSize = x;
            Arr = new int[iSize];
        }
        ~Array()
        {
            delete []Arr;
        }
        void Accept()
        {
            int iCnt = 0;
            cout<<"Please enter the elements :"<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }

        }
        void Display()
        {
            cout<<"Elements in Array are :"<<endl;
            int iCnt = 0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<endl;
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter the elements Want to store :"<<endl;
    cin>>iValue;

    Array *aobj = new Array(iValue);
    aobj->Accept();
    aobj->Display();

    delete []aobj;  //it will first ask compiler does it have destructor if yes then it 
                    // will first call destructor and then deallocate the dynamically 
                    //allocated memmory...

    return 0;
}