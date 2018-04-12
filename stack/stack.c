#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

struct Node
{
    ElementType Element;
    PtrToNode Next;
};

int IsEmpty(Stack S)
{
    return S->Next == NULL;
}

Stack CreateStack(void)
{
    Stack S;
    S = (Stack)malloc(sizeof(struct Node));
    //if(S == NULL) FatalError("Out of space!!!");
    S->Next == NULL;
    MakeEmpty(S);
    return S;
}

void MakeEmpty(Stack S)
{
    if(S == NULL) ;//Error("Must use CreateStack first");
    else
        while(!IsEmpty(S))
            Pop(S);
}

void Push(ElementType X, Stack S)
{
    PtrToNode TmpCall;
    TmpCall = (PtrToNode)malloc(sizeof(struct Node));
    if(TmpCall == NULL)
        ;//FatalError("Out of space!!!");
    else
    {
        TmpCall->Element = X;
        TmpCall->Next = S->Next;
        S->Next = TmpCall;
    }
}

ElementType Top(Stack S)
{
    if(!IsEmpty(S))
        return S->Next->Element;
    //Error("Empty Stack");
    return 0;
}

void Pop(Stack S)
{
    PtrToNode FirstCell;
    if(IsEmpty(S))
        ;//Error("Empty Stack");
    else
    {
        FirstCell = S->Next;
        S->Next = S->Next->Next;
        free(FirstCell);
    }
}
