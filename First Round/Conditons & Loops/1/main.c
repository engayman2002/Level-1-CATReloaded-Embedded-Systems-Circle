#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hour;
    printf("Please Enter the Working hours here : ");
    scanf("%d",&hour);
    if(hour<40)
    {
        printf("Your Salary = %d",hour*45);
    }
    else
    {
        printf("Your Salary = %d",hour*50);
    }

    return 0;
}
