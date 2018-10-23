#include "linkList.h"

int IsEmpty(List l)
{
    return l->next == NULL;
}

int IsLast(Position p, List l)
{
    return p->next == NULL;
}

Position Find(ElementType x, List l)
{
    Position p = NULL;
    p = l->next;
    while(p != NULL && p->element != x)
        p = p->next;

    return p;
}

Position FindPrevious(ElementType x, List l)
{
    Position p = NULL;
    p = l;
    while(p->next != NULL && p->next->element != x)
        p = p->next;

    if(p->next == NULL)
        p = NULL;

    return p;
}

void Delete(ElementType x, List l)
{
    Position p = NULL, tmpCell = NULL;
    p = FindPrevious(x, l);

    if(p != NULL)
    {
        tmpCell = p->next;
        p->next = tmpCell->next;
        free(tmpCell);
    }
}

void Insert(ElementType x, List l, Position p)
{
    Position tmpCell = NULL;
    tmpCell = malloc(sizeof(struct Node));
    if(tmpCell == NULL)
        FatalError("Out of space!!!");

    tmpCell->element = x;
    tmpCell->next = p->next;
    p->next = tmpCell;
}

void DeleteList(List l)
{
    Position p = NULL, tmp = NULL;
    p = l->next;
    l->next = NULL;
    while(p != NULL)
    {
        tmp = p->next;
        free(p);
        p = tmp;
    }
    free(l);
}
