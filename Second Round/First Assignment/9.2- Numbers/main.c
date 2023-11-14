#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,bit;
    printf("Enter any number: ");
    scanf("%d",&num);
    printf("Enter nth bit to check (0-31): ");
    scanf("%d",&bit);
    printf("The %d bit is set to %d",bit, (num==(num|(1<<bit))) );
    return 0;
}
