#include <stdio.h>
#include <stdlib.h>

int x;

int Partition(int a[],int low,int high)
{
    int pivot=a[high];
    int pindex=low;
    for(int i=low;i<high;i++)
    {
        if(a[i]<=pivot)
        {
            x=a[i];
            a[i]=a[pindex];
            a[pindex]=x;
            pindex++;
        }
    }
    x=a[pindex];
    a[pindex]=a[high];
    a[high]=x;
    return pindex;
}

void QuickSort(int a[],int low,int high)
{
    if(low<high)
    {
        int pindex=Partition(a,low,high);
        QuickSort(a,low,pindex-1);
        QuickSort(a,pindex+1,high);
    }
}

int main()
{
    int n;
    printf("Enter the size of your array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements and separate with them using spaces : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    QuickSort(a,0,n-1);

    printf("The Array After Sorting is : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
