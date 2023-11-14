#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Please Enter an amount : ");
    scanf("%d",&n);
    printf("The amount with tax added = %d",n+(int)(0.05*n));
    return 0;
}
