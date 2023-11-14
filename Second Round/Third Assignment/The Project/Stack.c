#include "Stack.h"
#include <stdlib.h>
#ifdef LIMITED_MEMEORY
// Linked-list Based
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

#else
// Array Based
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
#endif // LIMITED_MEMEORY
