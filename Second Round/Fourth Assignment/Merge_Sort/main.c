#include <stdio.h>
#include <stdlib.h>

void Merge(int a[],int na,int b[],int nb,int sum[])
{
    int i,j,k;
    i=j=k=0;

    while(i<na && j<nb)
    {
        if(a[i]<=b[j])
        {
            sum[k]=a[i];
            i++;
        }
        else
        {
            sum[k]=b[j];
            j++;
        }
        k++;
    }
    while(i<na)
    {
        sum[k]=a[i];
        i++;k++;
    }
    while(i<nb)
    {
        sum[k]=b[i];
        j++;k++;
    }

}
void MergeSort(int sum[],int n)
{
    if(n<2)return;
    int mid=n/2;
    int l[mid];
    int r[n-mid];
    for(int i=0;i<mid;i++)
    {
        l[i]=sum[i];
    }
    for(int i=mid;i<n;i++)
    {
        r[i-mid]=sum[i];
    }
    MergeSort(l,mid);
    MergeSort(r,n-mid);
}


int main()
{
    int n;


    int a[]={1,4,6,9,15};
    int b[]={2,5,8,10};


    n=(sizeof(a)/sizeof(a[0]))+(sizeof(b)/sizeof(b[0]));

    int sum[n];

    Merge(a,sizeof(a)/sizeof(a[0]),b,sizeof(b)/sizeof(b[0]),sum);
    MergeSort(sum,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",sum[i]);
    }


    return 0;
}
