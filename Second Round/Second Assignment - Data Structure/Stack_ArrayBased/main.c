#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct stack
{
    int arr[MAX];
    int top;
    int size;
}Stack;

void CreateStack(Stack *ps)
{
    ps->top=-1;
    ps->size=0;
}
void push(Stack *ps,int element)
{
    if(ps->size<100)
    {
        ps->top++;
        ps->arr[ps->top]=element;
        ps->size++;
    }
}
void pop(Stack *ps,int *element)
{
    if(ps->size>0)
    {
        ps->size--;
        *element=ps->arr[ps->top];
        ps->top--;
    }
}
int Stacksize(Stack *ps)
{
    return ps->size;
}
int StackFull(Stack *ps)
{
    return ps->size==MAX;
}
int StackEmpty(Stack *ps)
{
    return ps->size==0;
}

int main()
{
    int n,cond;
    Stack s;
    CreateStack(&s);
    int x;
    Retry:
    printf("Stack Based on Array (Max=100) (Simple Application)\n\n");
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
    case 7: // Clear The Stack -- Done
        CreateStack(&s);
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
