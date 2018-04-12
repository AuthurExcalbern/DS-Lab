#include<stdio.h>
#include<stdlib.h>
#include"list.h"


int IsEmpty(List L)
{
    return L->Next == NULL ? 1 : 0;
}

int IsLast(Position P, List L)
{
    return P->Next == NULL ? 1 : 0;
}

Position Find(ElementType X, List L)
{
    Position P;
    P = L->Next;
    while(P != NULL && P->Element != X) P = P->Next;
    return P;
}

Position FindPrevious(ElementType X, List L)
{
    Position P;
    P = L;
    while(P->Next != NULL && P->Next->Element != X) P = P->Next;
    return P;
}

void Delete(ElementType X, List L)
{
    Position P, TmpCall;
    P = FindPrevious(X, L);
    if( !IsLast(P, L) )
    {
        TmpCall = P->Next;
        P->Next = TmpCall->Next;
        free(TmpCall);
    }
}

void Insert(ElementType X, List L, Position P)
{
    Position TmpCall;
    TmpCall = (Position)malloc(sizeof(struct Node));
    if(TmpCall == NULL) { printf("插入内存分配报错\n"); return; }
    TmpCall->Element = X;//把插入的节点放置在P的后面
    TmpCall->Next = P->Next;
    P->Next = TmpCall;
}

void DeleteList(List L)
{
    Position P, Tmp;
    P = L->Next;//List只是表头指针，不是节点
    L->Next = NULL;
    while( P != NULL )
    {
        Tmp = P->Next;
        free(P);
        P = Tmp;
    }
}
