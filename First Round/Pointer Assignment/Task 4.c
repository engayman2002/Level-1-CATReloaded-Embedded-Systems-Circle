#include <stdio.h>
#include <stdlib.h>
void bubble(int *,int);

int main()
{
    int arr[6]={45,-12,0,100,-15,4};
    bubble(arr,6);
    for(int i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

void bubble(int *x,int len)
{
    int *y=x;
    int temp;
    int n=len-1;
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<n;j++)
        {
            if( (*x) > (*(x+1)) )
            {
                temp=*x;
                *x=(*(x+1));
                *(x+1)=temp;
            }
            x++;
        }
        x=y;n--;
    }
}
