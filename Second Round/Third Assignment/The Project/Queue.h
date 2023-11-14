#include "Global.h"

#ifdef LIMITED_MEMEORY
// Linked-list Based
typedef struct queuenode
{
    int element; // The Storage of the Variable
    struct queuenode *next; // The Pointer to the next element
}QueueNode;

typedef struct queue
{
    QueueNode *front; // The Pointer for the Front element of the queue
    QueueNode *rear; // The Last element of the queue
    int size; // The Size of Your Queue
}Queue;
#else
// Array Based
typedef struct queue
{
    int arr[MAX];
    int front;
    int rear;
    int size;
}Queue;
#endif // LIMITED_MEMEORY

/* The Functions here */

void CreateQueue(Queue *ps);
void append(Queue *ps,int element);
void Take(Queue *ps,int *element);
int Queuesize(Queue *ps);
int QueueFull(Queue *ps);
int QueueEmpty(Queue *ps);

