#include <stdio.h>
#include <stdlib.h>
int sum(int *,int *);

int main()
{
    int x,y;
    printf("Enter The First Number here : ");
    scanf("%d",&x);
    printf("Enter The Second Number here : ");
    scanf("%d",&y);
    printf("The sum = %d",sum(&x,&y));
    return 0;
}

int sum(int *a,int *b)
{
    return (*a+*b);
}
