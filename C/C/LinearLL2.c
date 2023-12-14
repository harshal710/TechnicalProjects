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

void InsertLast(PPNODE Head, int No)
{
    PNODE Temp = *Head;

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
        // Travel the LL till Last node
        while(Temp->next != NULL)
        {
            Temp = Temp -> next;
        }
        // Add the address of new node at the end of last node
        Temp->next = newn;
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


    Display(First);
    iRet = Count(First);

    printf("Number of Nodes are : %d",iRet);

    InsertLast(&First,121);
    InsertLast(&First,151);

    Display(First);
    iRet = Count(First);

    printf("Number of Nodes are : %d",iRet);


    return 0;
}