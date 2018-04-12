#ifndef _stack_h
#define ElementType int
struct Node;
typedef struct Node * PtrToNode;
typedef PtrToNode Stack;

int IsEmpty(Stack S);
Stack CreateStack(void);
void DisposeStack(Stack S);
void MakeEmpty(Stack S);
void Push(ElementType X, Stack S);
ElementType Top(Stack S);//查出顶端节点内容
void Pop(Stack S);

#endif
