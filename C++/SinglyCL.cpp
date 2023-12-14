#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE;

class SinglyCL
{
    private:
        PNODE first;
        PNODE last;
        int Count;

    public:
        SinglyCL();
        void InsertFirst(int no);
        void InsertLast(int no);
        void Display();
        int CountNode();
        void DeleteFirst();
        void DeleteLast();
        void InsertAtPos(int no,int ipos);
        void DeleteAtPos(int ipos);
};

SinglyCL::SinglyCL()
{
    first = NULL;
    last = NULL;
    Count = 0;
}
void SinglyCL::InsertFirst(int no)
{
    PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }
    last->next = first;
    Count++;
}

void SinglyCL::InsertLast(int no)
{
    PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        last->next = newn;
        last = newn;
    }
    newn->next = first;
    Count++;
}

void SinglyCL::Display()
{
    PNODE temp = first;
    cout<<"Elements in Circular LL are:"<<"\n";

    if(first != NULL && last != NULL)
    {
        do
        {
            cout<<"| "<<temp->data<<" |->";
            temp = temp->next;
        } while (temp != last->next);
        cout<<"Address of first\n";
    }

}

int SinglyCL::CountNode()
{
    return Count;
}

void SinglyCL::DeleteFirst()
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        first = first->next;
        free(last->next);
        last->next = first;
    }
    Count--;
}

void SinglyCL::DeleteLast()
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    else if(first == last)
    {
        free(first);
        first = NULL;
        last = NULL;
    }
    else
    {
        PNODE temp = first;
        

        while(temp->next != last)
        {
            temp = temp->next;
        }
        delete last;
        last = temp;
        temp->next = first;
    }
    Count--;
}

void SinglyCL::InsertAtPos(int no,int ipos)
{
    int i = 0;
    PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;

    PNODE temp = first;

    if(ipos < 1 || ipos > Count+1)
    {
        cout<<"invalid input\n";
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
        for(i = 1; i < ipos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
        Count++;
    }
}

void SinglyCL::DeleteAtPos(int ipos)
{
    int i = 0;
    PNODE temp = first;

    if(ipos < 1 || ipos > Count)
    {
        cout<<"invalid input\n";
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
        for(i = 1; i < ipos-1; i++)
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
    SinglyCL obj;
    int iret = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();
    iret = obj.CountNode();
    cout<<"Elements in LL are :"<<iret<<"\n\n";

    obj.InsertAtPos(81,4);
    obj.Display();
    iret = obj.CountNode();
    cout<<"Elements in LL are :"<<iret<<"\n\n";

    obj.DeleteAtPos(4);
    obj.Display();
    iret = obj.CountNode();
    cout<<"Elements in LL are :"<<iret<<"\n\n";


    obj.DeleteFirst();
    obj.Display();
    iret = obj.CountNode();
    cout<<"Elements in LL are :"<<iret<<"\n\n";

    obj.DeleteLast();
    obj.Display();
    iret = obj.CountNode();
    cout<<"Elements in LL are :"<<iret<<"\n\n";

    return 0;
}