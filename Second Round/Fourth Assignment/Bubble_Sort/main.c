#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int a[],int n)
{
    int flag;
    for(int i=0;i<n-1;i++)
    {
        flag=0;
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                a[j]=a[j]^a[j+1];
                a[j+1]=a[j]^a[j+1];
                a[j]=a[j]^a[j+1];
                flag=1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
}

int main()
{
    int a[]={5,1,3,2,10,6,18,7};
    BubbleSort(a,8);
    for(int i=0;i<8;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
