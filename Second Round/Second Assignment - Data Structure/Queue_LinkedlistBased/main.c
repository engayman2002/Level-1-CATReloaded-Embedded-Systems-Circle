#include <stdio.h>
#include <stdlib.h>

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

void pop(Queue *ps,int *element)
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

int main()
{
    int n,cond;
    Queue s;
    CreateQueue(&s);
    int x;
    Retry:
    printf("Queue Based on Array (Simple Application)\n\n");
    printf("Select from the menu what do you want : \n\n");
    printf("1-Append New Element\n");
    printf("2-Pop The Front Element\n");
    printf("3-Pop All Elements\n");
    printf("4-The Number of Elements\n");
    printf("5-Check Queue is Full\n");
    printf("6-Check Queue is Empty\n");
    printf("7-Clear The Queue\n");
    printf("8-End Program\n\n");
    WrongEntry:
    printf("Enter here your choice : ");
    scanf("%d",&cond);
    switch(cond)
    {
    case 1: //Append New Element
        if(!QueueFull(&s))
        {
            printf("Enter element here to push : ");
            scanf("%d",&x);
            append(&s,x);
        }
        else
        {
            printf("The Queue is Full, Pop an element First.\n");
        }
        break;
    case 2: // Pop The Front Element
        if(!QueueEmpty(&s))
        {
            pop(&s,&x);
            printf("The Popped Element is %d\n",x);
        }
        else
        {
            printf("The Queue is Empty, Put an element First.\n");
        }
        break;
    case 3: // Pop All Elements
        if(!QueueEmpty(&s))
        {
            while(!QueueEmpty(&s))
            {
                pop(&s,&x);
                printf("%d ",x);
            }
            printf("\n");
        }
        else
        {
            printf("The Queue is Empty, Put an element First.\n");
        }
        break;
    case 4: // The Number of Elements
        printf("The Number of Elements = %d\n",Queuesize(&s));
        break;
    case 5: // Check Queue is Full
        if(QueueFull(&s))
        {
            printf("The Queue is Full.\n");
        }
        else
        {
            printf("The Queue is not Full,You can append new element.\n");
        }
        break;
    case 6: // Check Queue is Empty
        if(QueueEmpty(&s))
        {
            printf("The Queue is Empty.\n");
        }
        else
        {
            printf("The Queue is not Empty, The Queue have %d element\n",Queuesize(&s));
        }
        break;
    case 7: // Clear The Queue
        CreateQueue(&s);
        printf("The Queue Cleared Successfully\n");
        break;

    case 8: // End Program
        return 0;
        break;
    default:
        printf("Wrong Entry ! Try Again\n\n");
        goto WrongEntry;
    }
    printf("..........................................\n\n");
    goto Retry;
    return 0;
}
