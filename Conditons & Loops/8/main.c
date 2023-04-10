#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter the Number here : ");
    scanf("%d",&num);
    printf("The Multiplication of Number %d\n",num);
    for(int i=1;i<13;i++)
    {
        printf("%d x %d = %d\n",i,num,i*num);
    }

    return 0;
}
