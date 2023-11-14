#include <stdio.h>
#include <stdlib.h>

int BinarySearch(int a[],int low,int high,int x)
{
    int mid=low+(high-low)/2;
    if(low<=high)
    {
        if(a[mid]==x)return mid;
        else if(a[mid]>x)
        {
            return BinarySearch(a,low,mid-1,x);
            //high=mid-1;
        }
        else if(a[mid]<x)
        {
            return BinarySearch(a,mid+1,high,x);
            //low=mid+1;
        }
    }
    return -1;
}

int main()
{
    int a[]={1,3,5,6,13,17,20,22,24,26,30};

    int x;
    printf("Enter the number you want to search : ");
    scanf("%d",&x);

    int index=BinarySearch(a,0,10,x);

    if(index==-1)
    {
        printf("The Number %d doesn't exist",x);
    }
    else
    {
        printf("The Number %d at index %d",x,index+1);
    }
    return 0;
}
