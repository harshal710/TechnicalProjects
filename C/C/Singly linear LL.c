#include<stdio.h>
#include<stdlib.h>

//structure declaration
struct node
{
    int data;           //4 bytes
    struct node *next;  //8 bytes

};

typedef struct node NODE;
typedef struct node * PNODE;    //due to this we can just write PNODE in place of struct node *
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
//step 1: Allocate memory for node
    PNODE newn = NULL;
    //struct node *newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    //newn = (struct node*)malloc(sizeof(struct node));

//step 2: Initialise the node
    newn->data = No;
    newn->next  = NULL;

//step 3: Check whether LL is empty or not
    if(*Head == NULL)   //LL is empty
    {
        *Head = newn;
    }
    else    //LL contains atleast 1 node in it
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head, int No)
{
    PNODE Temp = *Head;

    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next  = NULL;

    if(*Head == NULL)   //LL is empty
    {
        *Head = newn;
    }
    else    //LL contains atleast 1 node in it
    {
        while(Temp->next != NULL)
        {
            Temp = Temp -> next;
        }
        Temp->next = newn;
    }
}

void Display(PNODE Head)
{
    printf("Elements in linked list are :\n");

    while(Head != NULL)
    {
        printf("| %d | -> ",Head->data);
        Head = Head -> next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCnt = 0;

    while(Head != NULL)
    {
        iCnt++;
        Head = Head -> next;
    }
    return iCnt;
}

void DeleteFirst(PPNODE Head)
{
    PNODE Temp = *Head;

    if(*Head == NULL)   //case 1
    {
        return;
    }
    else if((*Head)->next == NULL)  //case 2
    {
        free(*Head);
        *Head = NULL;
    }
    else    //case 3
    {
        (*Head) = (*Head)-> next;
        free(Temp);
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE Temp = *Head;

    if(*Head == NULL)   //case 1
    {
        return;
    }
    else if((*Head)->next == NULL)  //case 2
    {
        free(*Head);
        *Head = NULL;
    }
    else    //case 3
    {
        while(Temp->next->next != NULL)
        {
            Temp = Temp -> next;
        }
        free(Temp->next);
        Temp->next = NULL;
    }
}

void InsertAtPos(PPNODE Head, int No, int iPos)
{
    PNODE newn = NULL;
    int i = 0;
    PNODE temp = *Head;
    int Size = Count(*Head);

    // case 1 : invalid position
    if((iPos < 1) || (iPos > Size+1))
    {
        printf("Invalid position\n");
        return;
    }

    // case 2 : first position
    if(iPos == 1)
    {
        InsertFirst(Head,No);
    }

    // case 3 : last position
    else if(iPos == Size+1)
    {
        InsertLast(Head,No);
    }

    // case 4 : position is between first and last
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = No;
        newn->next = NULL;

        for(i = 1; i < iPos; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteAtPos(PPNODE Head, int iPos)
{
    int Size = Count(*Head);
    PNODE temp = *Head;
    PNODE targetednode = NULL;

    int i = 0;

    // case 1 : invalid position
    if((iPos < 1) || (iPos > Size))
    {
        printf("Invalid position\n");
        return;
    }

    // case 2 : first position
    if(iPos == 1)
    {
        DeleteFirst(Head);
    }

    // case 3 : last position
    else if(iPos == Size)
    {
        DeleteLast(Head);
    }

    // case 4 : position is between first and last
    else
    {
        for(i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }
        targetednode = temp -> next;

        temp->next = temp->next->next;
        free(targetednode);
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 111);
    InsertFirst(&First, 101);
    InsertFirst(&First, 51);    //InsertFirst(60,51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);
    InsertLast(&First, 121);


    Display(First);
    iRet = Count(First);
    printf("Number of Nodes are : %d\n",iRet);

    InsertLast(&First,121);
    InsertLast(&First,151);
    Display(First);
    iRet = Count(First);
    printf("Number of Nodes are : %d\n",iRet);

    DeleteFirst(&First);
    Display(First);
    iRet = Count(First);
    printf("Number of Nodes are : %d\n",iRet);

    DeleteLast(&First);
    Display(First);
    iRet = Count(First);
    printf("Number of Nodes are : %d\n",iRet);

    // InsertAtPos(&First,105,5);
    // Display(First);
    // iRet = Count(First);
    // printf("Number of Nodes are : %d\n",iRet);

    // DeleteAtPos(&First,6);
    // Display(First);
    // iRet = Count(First);
    // printf("Number of Nodes are : %d\n",iRet);

    return 0;
}