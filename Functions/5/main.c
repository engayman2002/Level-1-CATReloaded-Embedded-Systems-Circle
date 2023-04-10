#include <stdio.h>
#include <stdlib.h>

int fun(int n)
{
    return (n-1)+(n-2);
}


int main()
{
    int num;
    printf("Enter the Number here : ");
    scanf("%d",&num);
    printf("The fibonacci is %d",fun(num));
    // Note I don't understand the problem very well.

    return 0;
}
