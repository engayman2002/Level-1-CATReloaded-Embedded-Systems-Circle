#include "Global.h"
#ifdef LIMITED_MEMEORY
// Linked-list Based
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
#else
// Array Based
typedef struct stack
{
    int arr[MAX];
    int top;
    int size;
}Stack;
#endif // LIMITED_MEMEORY

/* The Functions Here */
void CreateStack(Stack *ps);
void push(Stack *ps,int element);
void pop(Stack *ps,int *element);
int Stacksize(Stack *ps);
int StackFull(Stack *ps);
int StackEmpty(Stack *ps);
