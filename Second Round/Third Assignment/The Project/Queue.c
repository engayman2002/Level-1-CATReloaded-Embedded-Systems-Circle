#include "Queue.h"
#include <stdlib.h>

#ifdef LIMITED_MEMEORY
// Linked-list Based

void CreateQueue(Queue *ps)
{
    // We will start by initialize our queue with the first values
    ps->front=NULL;
    ps->rear=NULL;
    ps->size=0;
}

void append(Queue *ps,int element)
{
    QueueNode *pn= (QueueNode*)malloc(sizeof(QueueNode)); // Here you created a Node
    pn->next=NULL;  // Your New node points to Null
    pn->element=element; // You assign it by a value
    if(ps->rear) // If The Last doesn't point to null , The Last element will point to new node
    {
        ps->rear->next=pn;
    }
    else // If The Last points to null , The first element will point to new node
    {
        ps->front=pn;
    }
    ps->rear=pn; // Here the last element always points to the last node you created.
    ps->size++; // Increment the size by 1 , because you created a new element.
}

void Take(Queue *ps,int *element)
{
    QueueNode *pn=ps->front; // You Created a (pointer to QueueNode) and make it points to the first element.
    *element=pn->element; // You Take the element of this Node.
    ps->front=pn->next; // You make The Front Pointer points to the Next Node.
    free(pn); // You Deleted the first Node.
    if(!ps->front) // Special Case - If your front element points to null , then the rear must point to null too.
    {
        ps->rear=NULL;
    }
    ps->size--; // Decrement the size by 1 , because you deleted the first element.
}

int Queuesize(Queue *ps)
{
    return ps->size;
}
int QueueFull(Queue *ps)
{
    return 0;
}

int QueueEmpty(Queue *ps)
{
    return !ps->size;
}
#else

// Array Based

void CreateQueue(Queue *ps)
{
    ps->front=0;
    ps->rear=-1;
    ps->size=0;
}

void append(Queue *ps,int element)
{
    ps->size++;
    ps->rear++;
    ps->arr[ps->rear]=element;
}

void Take(Queue *ps,int *element)
{
    *element=ps->arr[ps->front];

    for(int i=0;i<ps->size;i++)
    {
        ps->arr[i]=ps->arr[i+1];
    }
    ps->rear--;
    ps->size--;
}

int Queuesize(Queue *ps)
{
    return ps->size;
}

int QueueFull(Queue *ps)
{
    return ps->size==MAX;
}

int QueueEmpty(Queue *ps)
{
    return ps->size==0;
}
#endif // LIMITED_MEMEORY
