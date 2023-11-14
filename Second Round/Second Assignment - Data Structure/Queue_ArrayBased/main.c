#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct queue
{
    int arr[MAX];
    int front;
    int rear;
    int size;
}Queue;

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

void pop(Queue *ps,int *element)
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

int main()
{
    int n,cond;
    Queue s;
    CreateQueue(&s);
    int x;
    Retry:
    printf("Queue Based on Array (Max=100) (Simple Application)\n\n");
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
