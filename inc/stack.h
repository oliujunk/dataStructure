#ifndef __STACK_H__
#define __STACK_H__

#include <stddef.h>
#include <stdlib.h>

typedef int ElementType;

struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode Stack;

int IsEmpty(Stack s);
Stack CreateStack(void);
void MakeEmpty(Stack s);
void Push(ElementType x, Stack s);
ElementType Top(Stack s);
ElementType Pop(Stack s);


#endif
