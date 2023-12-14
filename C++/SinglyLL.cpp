#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node * next;
}NODE, *PNODE, **PPNODE;

class SinglyLL
{
    private:            //this can be written in public also
        PNODE First;
        int Count;

    public:

        SinglyLL()
        {
            cout<<"inside constructor\n";
            First = NULL;
            Count = 0;
        }
        void InsertFirst(int no)    //this can be written outside class also
        {
            PNODE newn = NULL;
            newn = new NODE;    //this can be written using malloc
            newn->data = no;
            newn->next = NULL;

            if(First == NULL)       //if(Count == 0)
            {
                First = newn;
            }
            else
            {
                newn->next = First;
                First = newn;
            }
            Count++;
        }     
        void InsertLast(int no)
        {
            PNODE newn = NULL;
            newn = new NODE;    //this can be written using malloc
            newn->data = no;
            newn->next = NULL;
            PNODE temp = First;

            if(First == NULL)       //if(Count == 0)
            {
                First = newn;
            }
            else
            {
                while(temp->next != NULL)
                {
                    temp = temp->next;
                }
                temp->next = newn;
            }
            Count++;
        }
        void Display()
        {
            PNODE temp = First;
            while(temp != NULL)
            {
                cout<<"| "<<temp->data<<" |->";
                temp = temp->next;
            }
            cout<<"NULL\n";
        }
        int CountNode() //if count and first are public no need of this
        {
            return Count;
        }//As count is private it cannot be used in main so by
        //creating function countNode we are just accessing value 
        //from Count and returning it
};

int main()
{
    SinglyLL obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);
    obj.InsertLast(151);
    obj.InsertLast(201);

    obj.Display();
    iRet = obj.CountNode();

    cout<<"Number of elements in LL are :"<<iRet<<"\n";

    return 0;
}