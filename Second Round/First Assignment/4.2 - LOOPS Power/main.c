#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,pow;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter a power: ");
    scanf("%d",&pow);
    int res=1;
    while(pow--)
    {
        res*=num;
    }
    printf("Answer = %d",res);
    return 0;
}
