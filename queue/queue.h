#ifndef _queue_h
#define ElementType int
struct QueueRecord;
typedef struct QueueRecord *Queue;

int IsEmpty(Queue Q);
Queue CreateQueue(void);
void DisposeQueue(Queue Q);
void MakeEmpty(Queue Q);
void Enqueue(ElementType X, Queue Q);
ElementType Front(Queue Q);
void Dequeue(Queue Q);
ElementType FrontAndDequeue(Queue Q);

#endif

struct QueueRecord
{
    ElementType Element;
    Queue Next, Previous;
}
