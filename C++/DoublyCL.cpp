#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}NODE, *PNODE;

class DoublyCL
{
    private:
        PNODE first;
        PNODE last;
        int Count;

    public:
        DoublyCL();
        void InsertFirst(int no);
        void InsertLast(int no);
        void Display();
        int CountNode();
        void DeleteFirst();
        void DeleteLast();
        void InsertAtPos(int no,int ipos);
        void DeleteAtPos(int ipos);
};

DoublyCL::DoublyCL()
{
    first = NULL;
    last = NULL;
    Count = 0;
}
void DoublyCL::InsertFirst(int no)
{
    PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        first->prev = newn;
        first  = newn;
    }
    first->prev = last;
    last->next = first;
    Count++;
}

void DoublyCL::InsertLast(int no)
{
    PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        last->next = newn;
        newn->prev = last;
        last = newn;
    }
    first->prev = last;
    last->next = first;
    Count++;
}

void DoublyCL::Display()
{
    PNODE temp = first;
    cout<<"Elements in LL are:\n";
    cout<<"<=>";
    do
    {
        cout<<"| "<<temp->data<<" |<=>";
        temp = temp->next;
    } while (temp != first);
    cout<<"\n";
    
}

int DoublyCL::CountNode()
{
    return Count;
}

void DoublyCL::DeleteFirst()
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first == NULL;
        last == NULL;
    }
    else
    {
        first = first->next;
        delete first->prev;
    }
    first->prev = last;
    last->next = first;
    Count--;
}

void DoublyCL::DeleteLast()
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first == NULL;
        last == NULL;
    }
    else
    {
        last = last->prev;
        delete last->next;
    }
    first->prev = last;
    last->next = first;
    Count--;
}

void DoublyCL::InsertAtPos(int no,int ipos)
{
    PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    PNODE temp = first;
    int i = 0;

    if(ipos < 1 || ipos > Count+1)
    {
        cout<<"Invalid\n\n";
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == Count+1)
    {
        InsertLast(no);
    }
    else
    {
        for(i = 1; i < ipos-1 ; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
        Count++;
    }
}

void DoublyCL::DeleteAtPos(int ipos)
{
    int i = 0;

    if(ipos < 1 || ipos > Count)
    {
        cout<<"Invalid\n\n";
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == Count)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp = first;

        for(i = 1; i < ipos-1 ; i++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;
        Count--;
    }
}


int main()
{
    DoublyCL obj;
    int iret = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();
    iret = obj.CountNode();
    cout<<"No.of Elements in LL:"<<iret<<"\n\n";

    obj.InsertAtPos(105,5);
    obj.Display();
    iret = obj.CountNode();
    cout<<"No.of Elements in LL:"<<iret<<"\n\n";

    obj.DeleteAtPos(5);
    obj.Display();
    iret = obj.CountNode();
    cout<<"No.of Elements in LL:"<<iret<<"\n\n";

    obj.DeleteFirst();
    obj.Display();
    iret = obj.CountNode();
    cout<<"No.of Elements in LL:"<<iret<<"\n\n";

    obj.DeleteLast();
    obj.Display();
    iret = obj.CountNode();
    cout<<"No.of Elements in LL:"<<iret<<"\n\n";

    return 0;
}