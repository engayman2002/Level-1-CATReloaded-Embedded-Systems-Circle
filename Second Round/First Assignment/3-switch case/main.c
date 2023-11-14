#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Enter an operator (+,-,*,/): ");
    scanf(" %c",&c);
    float x,y;
    printf("Enter two operands: ");
    scanf("%f %f",&x,&y);
    switch(c)
    {
    case '+':
        printf("%f + %f = %f",x,y,x+y);
        break;
    case '-':
        printf("%f - %f = %f",x,y,x-y);
        break;
    case '*':
        printf("%f * %f = %f",x,y,x*y);
        break;
    case '/':
        printf("%f / %f = %f",x,y,x/y);
        break;
    default:
        printf("Wrong Entry");
    }

    return 0;
}
