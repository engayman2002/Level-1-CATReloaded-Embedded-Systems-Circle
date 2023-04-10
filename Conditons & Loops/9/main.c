#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter the Number here : ");
    scanf("%d",&num);
    if(num<0){printf("Wrong Number");return 0;}
    int fact=1;
    while(num--)
    {
        fact*=(num+1);
    }
    printf("The Factorial = %d",fact);


    return 0;
}
