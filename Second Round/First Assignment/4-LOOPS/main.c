#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter any number to find sum of its digit: ");
    scanf("%d",&x);
    int sum=0;
    while(x!=0)
    {
        sum+=(x%10);
        x/=10;
    }
    printf("Sum of digits = %d",sum);
    return 0;
}
