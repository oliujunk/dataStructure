#ifndef __LINKLIST_H__
#define __LINKLIST_H__

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

typedef int ElementType;

struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;



//判断链表是否为空，为空返回1，否则返回0
int IsEmpty(List l);

//判断当前位置的元素p是否的链表的最后一个元素
int IsLast(Position p, List l);

//查找x是否在链表中，若在返回x所在的位置，否则返回空指针
Position Find(ElementType x, List l);

//查找x在链表中的前驱元素
Position FindPrevious(ElementType x, List l);

//删除链表中的元素
void Delete(ElementType x, List l);

//在p的后面插入元素x
void Insert(ElementType x, List l, Position p);

//删除链表
void DeleteList(List l);

//清空链表
List MakeEmpty(List l);


Position Header(List l);

Position First(List l);

Position Advance(Position p);

ElementType Retrieve(Position p);



#endif
