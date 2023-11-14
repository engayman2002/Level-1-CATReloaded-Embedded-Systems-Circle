#include <stdio.h>
#include <stdlib.h>

void Swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}


int main()
{
    int m,n;
    printf("Enter the First Number here : ");
    scanf("%d",&m);
    printf("Enter the Second Number here : ");
    scanf("%d",&n);
    printf("Before Calling Function m = %d , n= %d\n",m,n);
    Swap(&m,&n);
    printf("After Calling Function m = %d , n= %d",m,n);

    return 0;
}
