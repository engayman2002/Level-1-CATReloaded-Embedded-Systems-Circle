#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

typedef struct stack
{
    char arr[MAX];
    int top;
    int size;
}Stack;

void CreateStack(Stack *ps)
{
    ps->top=-1;
    ps->size=0;
}
void push(Stack *ps,char element)
{
    if(ps->size<100)
    {
        ps->top++;
        ps->arr[ps->top]=element;
        ps->size++;
    }
}
char pop(Stack *ps)
{
    if(ps->size>0)
    {
        ps->size--;
        ps->top--;
        return ps->arr[ps->top];
    }
}
char take(Stack *ps)
{
    if(ps->size>0)
    {
        return ps->arr[ps->top];
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
int pr(char c)
{
    switch(c)
    {
    case '+':
    case '-':
        return 1;
    }
    return 0;
}

char infix[]={"a + b + c - d - e "};


int main()
{
    Stack mystack;
    Stack print;
    CreateStack(&mystack);
    CreateStack(&print);
    char postfix[sizeof(infix)];
    int i,j=0;
    char c,check1,check2;
    for(i=0;i<strlen(infix);i++)
    {
        if(infix[i]==' ')continue;
        if(infix[i]>='a' && infix[i]<='z')
        {
            postfix[j++]=infix[i];
        }
        else
        {
            if(!StackEmpty(&mystack))
            {
                check1 =pr( take(&mystack) );
                check2 = pr( infix[i] );
                if( check1>= check2 )
                {
                    while( !StackEmpty(&mystack) )
                    {
                        char p=pop(&mystack);

                        postfix[j]=p;
                        j++;
                    }

                }
            }
            push(&mystack,infix[i]);
            push(&print,infix[i]);
        }

    }
    int k=0;
    postfix[j++]=0;
    for(int i=0;i<j;i++)
    {
        if(postfix[i]>='a' && postfix[i]<='z')
        printf("%c",postfix[i]);
        else
        printf("%c",print.arr[k++]);
    }

    return 0;
}
