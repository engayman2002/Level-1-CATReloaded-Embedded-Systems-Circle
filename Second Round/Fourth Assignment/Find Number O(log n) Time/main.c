#include <stdio.h>
#include <stdlib.h>

int BinarySearch(int a[],int n)
{
    int low=0,high=n-1;
    int mid;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(a[mid]>a[mid-1] && a[mid]>a[mid+1])return mid;
        else if(a[mid]>a[mid-1])
        {
            low=mid;
        }
        else if(a[mid]<a[mid-1])
        {
            high=mid;
        }
    }
    return -1;
}

int main()
{
    int a[]={4,5,8,9,10,11,7,3,2,1};


    int index=BinarySearch(a,11);


    printf("The Maximum Number %d at index %d",a[index],index+1);

    return 0;
}
