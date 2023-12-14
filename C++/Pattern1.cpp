#include<iostream>
using namespace std;

class Pattern
{
    private:
        int iRow;
        int iCol;

    public:
        Pattern(int x, int y)
        {
            iRow = x;
            iCol = y;
        }

        void Display()
        {
            int i = 0;
            int j = 0;

            for(i = 1; i <= iRow; i++)
            {
                for(j = 1; j <= iCol; j++)
                {
                    if(i == j)
                    {
                        cout<<"$\t";
                    }
                    else if(j != 1 && j < i && i != iRow)
                    {
                        cout<<"0\t";
                    }
                    else if(i != 1 && i < j && j != iCol)
                    {
                        cout<<"1\t";
                    }
                    else
                    {
                        cout<<"*\t";
                    }
                }
                cout<<"\n";
            }
        }
};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout<<"Enter the number of rows :";
    cin>>iValue1;

    cout<<"Enter the number of columns :";
    cin>>iValue2;

    Pattern *pobj  = new Pattern(iValue1,iValue2);

    pobj->Display();

    delete []pobj;

    return 0;
}