#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    do
    {
    printf("Enter The Result of 3x4 = ");
    scanf("%d",&num);
    if(num==12)
    {
        break;
    }
    else
    {
        printf("Try again!\n");
    }
    }while(1);
    printf("Thanks");
    return 0;
}
