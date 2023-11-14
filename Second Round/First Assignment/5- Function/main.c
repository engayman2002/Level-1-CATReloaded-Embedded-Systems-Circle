#include <stdio.h>
#include <stdlib.h>

void fun(int *max,int *min,int *a)
{
    int i;
    for(i=0;i<4;i++)
    {
        *max = *max < *(a+i) ? *(a+i) : *max;
        *min = *min > *(a+i) ? *(a+i) : *min;
    }
}

int main()
{
    int max,min;
    int a[4];
    printf("Enter 4 Numbers : ");
    int i;
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    max=min=a[0];
    fun(&max,&min,a);
    printf("The Maximum Number is : %d\n",max);
    printf("The Minimum Number is : %d\n",min);
    return 0;
}
