#include "stack.h"

struct Node
{
    ElementType element;
    PtrToNode next;
};

int IsEmpty(Stack s)
{
    return s->next == NULL;
}

Stack CreateStack(void)
{
    Stack s = NULL;
    s = malloc(sizeof(struct Node));
    if(s == NULL)
        printf("Out of space!!!");

    s->next = NULL;
    MakeEmpty(s);
    return s;
}

void MakeEmpty(Stack s)
{
    if(s == NULL)
        printf("Must use CreateStack first!");
    else
        while(!IsEmpty(s))
            Pop(s);
}

void Push(ElementType x, Stack s)
{
    PtrToNode tmpCell = NULL;
    tmpCell = malloc(sizeof(struct Node));
    if(tmpCell == NULL)
    {
        printf("Out of space!!!");
    }
    else
    {
        tmpCell->element = x;
        tmpCell->next = s->next;
        s->next = tmpCell;
    }
}

ElementType Top(Stack s)
{
    if(!IsEmpty(s))
        return s->next->element;

    printf("Empty stack!");
    return 0;
}

ElementType Pop(Stack s)
{
    ElementType element = 0;
    PtrToNode firstCell = NULL;
    if(IsEmpty(s))
    {
        printf("Empty stack!");
    }
    else
    {
        firstCell = s->next;
        s->next = s->next->next;
        element = firstCell->element;
        free(firstCell);
    }

    return element;
}
