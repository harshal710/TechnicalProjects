#include<iostream>
using namespace std;

class Array
{
    private:
        int *Arr;
        int iLength;

    public:
        Array(int Size)
        {
            iLength = Size;
            Arr = new int[iLength];
        }
        
        ~Array()
        {
            delete []Arr;
        }

        void Accept()
        {
            int iCnt = 0;
            cout<<"Enter the elements : "<<"\n";
            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                cin>>Arr[iCnt];
            }
            cout<<"\n";
        }
        void Display()
        {
            int iCnt = 0;
            cout<<" elements of Array are : "<<"\n";
            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
        }
     
};

int main()
{
    Array aobj(5);

    return 0;
}