#include <stdio.h>
#include <stdlib.h>
int sm(int *,int *);

int main()
{
    int arr1[]={1,2,3,4};
    int arr2[]={5,6,7,8};
    printf("The Sum = %d",sm(arr1,arr2));
    return 0;
}
int sm(int *x,int *y)
{
    int sum=0;
    for(int i=0;i<4;i++)
    {
        sum+=((*x++)*(*y++));
    }
    return sum;
}

