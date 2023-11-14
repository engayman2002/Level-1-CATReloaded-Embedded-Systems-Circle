#include <stdio.h>
#include <stdlib.h>

void fun(int *max,int *min,int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        *max = *max > *(a+i) ? *max : *(a+i);
        *min = *min < *(a+i) ? *min : *(a+i);
    }
}

int main()
{
    int n,max,min;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter %d elements in array: ",n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=min=a[0];
    fun(&max,&min,a,n);
    printf("Minimum element in array: %d\n",min);
    printf("Maximum element in array: %d\n",max);
    return 0;
}
