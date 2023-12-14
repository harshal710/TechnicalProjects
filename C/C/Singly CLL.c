#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
}NODE,*PNODE,**PPNODE;

// -------------------------------------------------------------------------
// the below commented part can also be written as above syntax
// -------------------------------------------------------------------------
// struct node
// {
//     int data;
//     struct node* next;
// };

// typedef struct node NODE;
// typedef struct node* PNODE;
// typedef struct node** PPNODE;

void InsertFirst(PPNODE Head,PPNODE Tail, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if((*Head == NULL) && (*Tail == NULL))      //LL is empty
    {
        *Head = newn;
        *Tail = newn;
        // (*Tail)->next = *Head;
    }

    else            //LL contains at least one node
    {
        newn->next = *Head;
        *Head = newn;
        // (*Tail)->next = *Head;
    }
    (*Tail)->next = *Head;
}

void InsertLast(PPNODE Head,PPNODE Tail, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if((*Head == NULL) && (*Tail == NULL))      //LL is empty
    {
        *Head = newn;
        *Tail = newn;
        (*Tail)->next = *Head;
    }

    else            //LL contains at least one node
    {
        (*Tail)->next =newn;
        *Tail = newn;
        (*Tail)->next = *Head;
    }
}

void DeleteFirst(PPNODE Head,PPNODE Tail)
{
    if((*Head == NULL) && (*Tail == NULL))
    {
        return;
    }
    else if(*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        (*Head) = (*Head)->next;
        free((*Tail)->next);
        (*Tail)->next = *Head;
    }
}

void DeleteLast(PPNODE Head,PPNODE Tail)
{
    PNODE temp = *Head;
    if((*Head == NULL) && (*Tail == NULL))
    {
        return;
    }
    else if(*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        free(*Tail);
        *Tail = temp;
        temp->next = *Head;
    }

}

void Display(PNODE Head, PNODE Tail)
{
    printf("Elements of Linked List are :\n");

    if((Head != NULL) && (Tail != NULL))    //if this condition is not applied then even if stack is empthy do loop will function once
    {
        do
        {
            printf("| %d |->",Head->data);
            Head = Head->next;
        } while (Head != Tail->next);
        printf("Address of Head\n");
    }
}

int Count(PNODE Head, PNODE Tail)
{
    int iCnt = 0;
    if((Head != NULL) && (Tail != NULL))
    {
        do
        {
            iCnt++;
            Head = Head->next;
        } while (Head != Tail->next);
        
    return iCnt;
    }
}

InsertAtPos(PPNODE Head, PPNODE Tail, int no, int iPos)
{
    int iSize =0, i = 0;
    iSize = Count(*Head, *Tail);
    PNODE newn = NULL;
    PNODE temp = *Head;

    if((iPos < 1) || (iPos > iSize+1))
    {
        printf("Invalid position\n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(Head,Tail,no);
    }
    else if(iPos == iSize+1)
    {
        InsertLast(Head,Tail,no);
    }
    else
    {
        newn =(PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp -> next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}

DeleteAtPos(PPNODE Head, PPNODE Tail, int iPos)
{
    int iSize =0, i = 0;
    iSize = Count(*Head, *Tail);
    PNODE temp = *Head;

    if((iPos < 1) || (iPos > iSize))
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
            temp = temp -> next;
        }
        PNODE targetednode = temp->next;
        temp->next = temp->next->next;
        free(targetednode);         //its not needed to free but this 
                                    //this is not good programming practice
                                    //as this will leak memeory

    }
}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;      //#
    int iRet = 0;

    InsertFirst(&First, &Last, 51);
    InsertFirst(&First, &Last, 21);
    InsertFirst(&First, &Last, 11);
    Display(First,Last);
    iRet = Count(First,Last);
    printf("Number of elements are : %d\n",iRet);

    InsertLast(&First, &Last, 101);
    InsertLast(&First, &Last, 111);
    InsertLast(&First, &Last, 121);
    Display(First,Last);
    iRet = Count(First,Last);
    printf("Number of elements are : %d\n",iRet);

    InsertAtPos(&First,&Last,105,5);
    Display(First,Last);
    iRet = Count(First,Last);
    printf("Number of elements are : %d\n",iRet);

    DeleteAtPos(&First,&Last,5);
    Display(First,Last);
    iRet = Count(First,Last);
    printf("Number of elements are : %d\n",iRet);

    DeleteFirst(&First,&Last);
    Display(First,Last);
    iRet = Count(First,Last);
    printf("Number of elements are : %d\n",iRet);

    DeleteLast(&First,&Last);
    Display(First,Last);
    iRet = Count(First,Last);
    printf("Number of elements are : %d\n",iRet);



    return 0;
}