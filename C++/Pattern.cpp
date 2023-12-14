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
                    
                }
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

    Pattern pobj(iValue1,iValue2);

    pobj.Display();

    return 0;
}