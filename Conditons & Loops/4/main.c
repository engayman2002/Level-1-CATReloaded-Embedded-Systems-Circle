#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter your Grade here : ");
    scanf("%d",&num);
    if(num>100 || num<0)
    {
        printf("Wrong Number");
    }
    else if(num>=85)
    {
        printf("Excellent");
    }
    else if(num>=75)
    {
        printf("Very Good");
    }
    else if(num>=65)
    {
        printf("Good");
    }
    else if(num>=50)
    {
        printf("Accepted");
    }
    else
    {
        printf("Failed");
    }

    return 0;
}
