#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
    struct node * prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((*Head == NULL) && (*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        newn->next = *Head;
        (*Head)->prev = newn; 
        *Head = newn;
    }

    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;
}

void InsertLast(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((*Head == NULL) && (*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        newn->prev = *Tail;
        (*Tail)->next = newn;
        *Tail = newn;
    }

    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;
}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{
    if(( *Head == NULL) && (*Tail == NULL)) //case 1:empty LL
    {

    }
    else if(*Head == *Tail)     //case 2:single node LL
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else        //case 3:More than one node in LL
    {
        *Head = (*Head)->next;
        free((*Tail)->next);        //free((*Head)->prev)
        (*Tail)->next = *Head;
        (*Head)->prev = *Tail;
    }
}

void DeleteLast(PPNODE Head, PPNODE Tail)
{
    if(( *Head == NULL) && (*Tail == NULL)) //case 1:empty LL
    {

    }
    else if(*Head == *Tail)     //case 2:single node LL
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else        //case 3:More than one node in LL
    {
        *Tail = (*Tail)->prev;
        free((*Head)->prev);        //free((*Tail)->next)
        (*Tail)->next = *Head;
        (*Head)->prev = *Tail;
    }
}

void Display(PNODE Head, PNODE Tail)
{
    if(Head != NULL && Tail != NULL)
    {
        do
        {
            printf("| %d |<=>",Head->data);
            Head = Head->next;
        } while (Head != Tail->next);
        printf("\n");
    }
    
}

int Count(PNODE Head, PNODE Tail)
{
    int iCnt = 0;

    if(Head != NULL && Tail != NULL)
    {
        do
        {
            iCnt++;
            Head = Head->next;
        } while (Head != Tail->next);
    return iCnt;
    }
}

void InsertAtPos(PPNODE Head, PPNODE Tail, int no, int iPos)
{
    PNODE newn = NULL;
    int iSize = Count(*Head,*Tail);
    int i = 0;
    PNODE temp = *Head;

    if(iPos < 1 || iPos  > (iSize+1))
    {
        printf("Invalid position\n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(Head,Tail,no);
    }
    else if(iPos == (iSize+1))
    {
        InsertLast(Head,Tail,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp->next; 
        }

        newn->next = temp->next;
        temp->next->prev = newn;
        newn->prev = temp;
        temp->next = newn;
    }
}

void DeleteAtPos(PPNODE Head, PPNODE Tail, int iPos)
{
    PNODE temp = *Head;
    int iSize = Count(*Head,*Tail);
    int i = 0;

    if(iPos < 1 || iPos > (iSize))
    {
        printf("Invalid position\n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(Head,Tail);
    }
    else if(iPos == iSize)
    {
        DeleteLast(Head,Tail);
    }
    else
    {
        for(i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;
        
    }
}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;
    int iRet = 0;

    InsertFirst(&First, &Last, 51);
    InsertFirst(&First, &Last, 21);
    InsertFirst(&First, &Last, 11);

    InsertLast(&First, &Last, 101);
    InsertLast(&First, &Last, 111);
    InsertLast(&First, &Last, 121);
    
    Display(First, Last);
    iRet = Count(First,Last);
    printf("Number of elements: %d\n\n",iRet);


    InsertAtPos(&First, &Last,105,4);

    Display(First, Last);
    iRet = Count(First,Last);
    printf("Number of elements: %d\n\n",iRet);


    DeleteAtPos(&First, &Last,4);

    Display(First, Last);
    iRet = Count(First,Last);
    printf("Number of elements: %d\n\n",iRet);
    
    
    DeleteFirst(&First, &Last);

    Display(First, Last);
    iRet = Count(First,Last);
    printf("Number of elements: %d\n\n",iRet);


    DeleteLast(&First, &Last);

    Display(First, Last);
    iRet = Count(First,Last);
    printf("Number of elements: %d\n\n",iRet);


    return 0;
}