#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10];
    int sum=0;
    for(int i=0;i<10;i++)
    {
        printf("Enter the Number with index[%d] here : ",i+1);
        scanf("%d",&num[i]);
        sum+=num[i];
    }
    printf("The Sum = %d\nThe Average = %f",sum,sum/10.0);

    return 0;
}
