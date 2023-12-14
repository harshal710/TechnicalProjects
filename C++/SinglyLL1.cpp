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

        SinglyLL();
        void InsertFirst(int no);    //this can be written outside class also
        void InsertLast(int no);
        void Display();
        int CountNode();
        void DeleteFirst();
        void DeleteLast();
        void InsertAtPos(int no, int iPos);
        void DeleteAtPos(int iPos);
};

// -------------------------------------------------------------------

//IF FUNCTIONS ARE WRITTEN OUTSIDE THE CLASS

// -------------------------------------------------------------------------
/*
Return_value class_name :: Function_Name()
{}
}*/
// -----------------------------------------------------------------------

SinglyLL ::SinglyLL()
{
    cout<<"inside constructor\n";
    First = NULL;
    Count = 0;
}

void SinglyLL :: InsertFirst(int no)    //this can be written outside class also
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
void SinglyLL :: InsertLast(int no)
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
void SinglyLL :: Display()
{
    PNODE temp = First;
    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |->";
        temp = temp->next;
    }
    cout<<"NULL\n";
}
int SinglyLL :: CountNode() //if count and first are public no need of this
{
    return Count;
}
void SinglyLL :: DeleteFirst()
{
    if(First == NULL)
    {
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        PNODE temp = First;

        First =  First->next;
        delete temp;
    }
    Count--;
}
void SinglyLL :: DeleteLast()
{
    if(First == NULL)
    {
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        PNODE temp = First;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    Count--;
}
void SinglyLL :: InsertAtPos(int no, int iPos)
{  
    if(iPos < 1 || iPos > Count+1) 
    {
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(no);
    }
    else if(iPos == Count+1)
    {
        InsertLast(no);
    }
    else
    {
        PNODE newn = NULL;
        newn = new NODE;
        newn->data = no;
        newn->next = NULL;
        PNODE temp = First;
        int i = 0;

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
        Count++;
    }
    
}
void SinglyLL :: DeleteAtPos(int iPos)
{
    if(iPos < 1 || iPos > Count) 
    {
        return;
    }
    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == Count)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp = First;
        int i = 0;

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }
        PNODE targetednode = temp->next;
        temp->next = temp->next->next;
        delete targetednode;

        Count--;
    }
    
}

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
    cout<<"Number of elements in LL are :"<<iRet<<"\n\n";

    obj.InsertAtPos(105,5);
    obj.Display();
    iRet = obj.CountNode();
    cout<<"Number of elements in LL are :"<<iRet<<"\n\n";

    obj.DeleteAtPos(5);
    obj.Display();
    iRet = obj.CountNode();
    cout<<"Number of elements in LL are :"<<iRet<<"\n\n";

    obj.DeleteFirst();
    obj.DeleteLast();

    obj.Display();
    iRet = obj.CountNode();
    cout<<"Number of elements in LL are :"<<iRet<<"\n\n";


    return 0;
}