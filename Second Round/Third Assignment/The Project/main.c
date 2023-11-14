#include <stdio.h>
#include <stdlib.h>
#include "Global.h"
#include "Stack.h"
#include "Queue.h"

// You Can Access it in Global.h
#ifdef LIMITED_MEMEORY
int im=0; // Linked List
#else
int im=1; // Array
#endif // LIMITED_MEMEORY

int main()
{
    int x;
    int n,cond;
    Stack s;
    CreateStack(&s);
    Queue q;
    CreateQueue(&q);
    int type;
    Retry:
    printf((im?"Array-Based (Max=100) is Working now\n":"Linkedlist-Based is Working now.\n"));
    ChooseType:
    printf("\nIf you want to work on (Stack Click 1) or (Queue Click 2) : ");
    scanf("%d",&type);
    switch(type)
    {
    case 1: // Stack
    RetryStack:
    printf("\n(Simple Application)\n\n");
    printf("Select from the menu what do you want : \n\n");
    printf("1-Push New Element\n");
    printf("2-Pop The Last Element\n");
    printf("3-Pop All Elements\n");
    printf("4-The Number of Elements\n");
    printf("5-Check Stack is Full\n");
    printf("6-Check Stack is Empty\n");
    printf("7-End Program\n");
    printf("8-Retrun to the Head of the program\n\n");
    WrongEntryStack:
    printf("Enter here your choice : ");
    scanf("%d",&cond);
    switch(cond)
    {
    case 1: //Push New Element
        if(!StackFull(&s))
        {
            printf("Enter element here to push : ");
            scanf("%d",&x);
            push(&s,x);
        }
        else
        {
            printf("The Stack is Full, Pop an element First.\n");
        }
        break;
    case 2: // Pop The Last Element
        if(!StackEmpty(&s))
        {
            pop(&s,&x);
            printf("The Popped Element is %d\n",x);
        }
        else
        {
            printf("The Stack is Empty, Put an element First.\n");
        }
        break;
    case 3: // Pop All Elements
        if(!StackEmpty(&s))
        {
            while(!StackEmpty(&s))
            {
                pop(&s,&x);
                printf("%d ",x);
            }
            printf("\n");
        }
        else
        {
            printf("The Stack is Empty, Put an element First.\n");
        }
        break;
    case 4: // The Number of Elements
        printf("The Number of Elements = %d\n",Stacksize(&s));
        break;
    case 5: // Check Stack is Full
        if(StackFull(&s))
        {
            printf("The Stack is Full.\n");
        }
        else
        {
            printf("The Stack is not Full,You can push new element.\n");
        }
        break;
    case 6: // Check Stack is Empty
        if(StackEmpty(&s))
        {
            printf("The Stack is Empty.\n");
        }
        else
        {
            printf("The Stack is not Empty, The Stack have %d element\n",Stacksize(&s));
        }
        break;
    case 7: // End Program
        return 0;
        break;
    case 8: // Retry
        goto Retry;
        break;
    default:
        printf("Wrong Entry ! Try Again\n\n");
        goto WrongEntryStack;
    }
    printf("..........................................\n\n");
    goto RetryStack;
        break;

    case 2: // Queue

    RetryQueue:
    printf("\n(Simple Application)\n\n");
    printf("Select from the menu what do you want : \n\n");
    printf("1-Append New Element\n");
    printf("2-Take The Front Element\n");
    printf("3-Take All Elements\n");
    printf("4-The Number of Elements\n");
    printf("5-Check Queue is Full\n");
    printf("6-Check Queue is Empty\n");
    printf("7-End Program\n");
    printf("8-Retrun to the Head of the program\n\n");
    WrongEntryQueue:
    printf("Enter here your choice : ");
    scanf("%d",&cond);
    switch(cond)
    {
    case 1: //Append New Element
        if(!QueueFull(&q))
        {
            printf("Enter element here to push : ");
            scanf("%d",&x);
            append(&q,x);
        }
        else
        {
            printf("The Queue is Full, Pop an element First.\n");
        }
        break;
    case 2: // Take The Front Element
        if(!QueueEmpty(&q))
        {
            Take(&q,&x);
            printf("The Popped Element is %d\n",x);
        }
        else
        {
            printf("The Queue is Empty, Put an element First.\n");
        }
        break;
    case 3: // Take All Elements
        if(!QueueEmpty(&q))
        {
            while(!QueueEmpty(&q))
            {
                Take(&q,&x);
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
        printf("The Number of Elements = %d\n",Queuesize(&q));
        break;
    case 5: // Check Queue is Full
        if(QueueFull(&q))
        {
            printf("The Queue is Full.\n");
        }
        else
        {
            printf("The Queue is not Full,You can append new element.\n");
        }
        break;
    case 6: // Check Queue is Empty
        if(QueueEmpty(&q))
        {
            printf("The Queue is Empty.\n");
        }
        else
        {
            printf("The Queue is not Empty, The Queue have %d element\n",Queuesize(&q));
        }
        break;

    case 7: // End Program
        return 0;
        break;
    case 8: // Retry
        goto Retry;
        break;
    default:
        printf("Wrong Entry ! Try Again\n\n");
        goto WrongEntryQueue;
    }
    printf("..........................................\n\n");
    goto RetryQueue;
        break;
    default:
        printf("it's Wrong Entry,Try Again!!\n");
        goto ChooseType;
    }
    return 0;
}
