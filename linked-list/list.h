#ifndef _list_H
#define ElementType int
struct Node;//链表节点
typedef struct Node * PtrToNode;//链表节点指针
typedef PtrToNode List;//表头
typedef PtrToNode Position;//目前表中位置

List MakeEmpty(List L);//使链表为空
int IsEmpty(List L);//检测链表是否为空
int IsLast(Position P, List L);//测试链表是否到达尾部
Position Find(ElementType X, List L);//找到X在链表里的位置,不存在则返回NULL
void Delete(ElementType X, List L);//删除链表里的元素X
Position FindPrevious (ElementType X, List L);//找到X在链表里的前一个位置,不存在则返回最尾端节点
void Insert(ElementType X, List L, Position P);//在表List的P位置插入元素X
void DeleteList(List L);//删除表
/*
Position Header(List L);
Position First(List L);
Position Advance(Position P);
ElementType Retrieve(Position P);
*/
#endif

struct Node
{
    ElementType Element;
    Position Next;
};
