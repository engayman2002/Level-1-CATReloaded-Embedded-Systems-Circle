#include <stdio.h>
#include <stdlib.h>

typedef struct stacknode
{
    int element; // The Storage of the Variable
    struct stacknode *next; // The Pointer to the next element
}StackNode;

typedef struct stack
{
    StackNode *top; // The Pointer for the top element of the queue
    int size; // The Size of Your Stack.
}Stack;

void CreateStack(Stack *ps)
{
    // We will start by initialize our stack with the first values
    ps->top=NULL;
    ps->size=0;
}
void push(Stack *ps,int element)
{
    StackNode *pn = (StackNode*)malloc(sizeof(StackNode)); // Here you created a Node
    pn->element=element; // You assign it by a value
    pn->next=ps->top; // you connected the last element of the stack with the new element.
    ps->top=pn; // You make the top pointer points to the last element.
    ps->size++; // Increment the size by 1 , because you created a new node.
}
void pop(Stack *ps,int *element)
{
    *element=ps->top->element; // You take the value included in the last element
    StackNode *pn=ps->top; // You make a pointer and make it points to the top node.
    ps->top=ps->top->next; // you make the top pointer points to the next node in the stack.
    free(pn); // you deleted the node after taking it's value.
    ps->size--; // Decrement the size by 1 , because you deleted the last element.
}

int Stacksize(Stack *ps)
{
    return ps->size; // Here we return the number of elements.
}

int StackFull(Stack *ps)
{
    return 0;
}

int StackEmpty(Stack *ps)
{
    return !ps->size;
}

int main()
{
    int n,cond;
    Stack s;
    CreateStack(&s);
    int x;
    Retry:
    printf("Stack Based on Array (Simple Application)\n\n");
    printf("Select from the menu what do you want : \n\n");
    printf("1-Push New Element\n");
    printf("2-Pop The Last Element\n");
    printf("3-Pop All Elements\n");
    printf("4-The Number of Elements\n");
    printf("5-Check Stack is Full\n");
    printf("6-Check Stack is Empty\n");
    printf("7-Clear The Stack\n");
    printf("8-End Program\n\n");
    WrongEntry:
    printf("Enter here your choice : ");
    scanf("%d",&cond);
    switch(cond)
    {
    case 1: //Push New Element
        printf("Enter element here to push : ");
        scanf("%d",&x);
        push(&s,x);
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
        if(!StackFull(&s))
        printf("The Stack is not Full,You can push new element.\n");
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

    case 7: // Clear The Stack
        while(!StackEmpty(&s))
        {
            pop(&s,&x);
        }
        printf("The Stack Cleared Successfully\n");
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
