#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Push(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

int Pop(PPNODE Head)
{
    PNODE temp = *Head;
    int value = 0;

    if(*Head == NULL)
    {
        printf("stack is empty..\n");
    }
    else
    {  
        value = (*Head)->data;
        *Head = (*Head)->next;
        free(temp);
    }
    return value;
}

void Display(PNODE Head)
{
    printf("Elements of stack are:\n");

    while(Head != NULL)
    {
        printf("| %d |\n",Head->data);
        Head = Head->next;
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    Push(&First,101);
    Push(&First,51);
    Push(&First,21);
    Push(&First,11);

    Display(First);

    iRet = Pop(&First);
    printf("Popped element is : %d\n\n",iRet);

    iRet = Pop(&First);
    printf("Popped element is : %d\n\n",iRet);

    iRet = Pop(&First);
    printf("Popped element is : %d\n\n",iRet);

    iRet = Pop(&First);
    printf("Popped element is : %d\n\n",iRet);

    Display(First);

    printf("stack is empty\n");

    return 0;
}