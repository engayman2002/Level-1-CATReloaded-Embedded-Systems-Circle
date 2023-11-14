#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter the number here : ");
    scanf("%d",&num);
    if(num&1)
    {
        printf("Odd");
    }
    else
    {
        printf("Even");
    }

    return 0;
}
