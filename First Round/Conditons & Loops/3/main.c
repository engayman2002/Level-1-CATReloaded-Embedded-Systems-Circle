#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter your ID here : ");
    scanf("%d",&num);
    switch(num)
    {
    case 1234:
        printf("Harry");
        break;
    case 5678:
        printf("Ron");
        break;
    case 1145:
        printf("Hermione");
        break;
    default:
        printf("Wrong ID");
    }

    return 0;
}
