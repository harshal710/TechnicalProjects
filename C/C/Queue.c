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

void Enqueue(PPNODE Head, int no)
{
    PNODE temp = *Head;
    PNODE  newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

int Dequeue(PPNODE Head)
{
    PNODE temp = *Head;
    int value = 0;

    if(*Head == NULL)
    {
        printf("Queue is empty..\n");
        return value;
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
    printf("Elements of Queue are:\n");

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

    Enqueue(&First,11);
    Enqueue(&First,21);
    Enqueue(&First,51);
    Enqueue(&First,101);
    Enqueue(&First,111);

    Display(First);


    iRet = Dequeue(&First);
    printf("Dequeued element is : %d\n\n",iRet);

    iRet = Dequeue(&First);
    printf("Dequeued element is : %d\n\n",iRet);

    iRet = Dequeue(&First);
    printf("Dequeued element is : %d\n\n",iRet);

    iRet = Dequeue(&First);
    printf("Dequeued element is : %d\n\n",iRet);

    Display(First);


    return 0;
}