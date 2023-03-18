#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ulli unsigned long long int

int main()
{
    // Take Inputs
	int n=0;
	printf("Please Enter the size of The Array : ");
	scanf("%d",&n);
	int a[n];
	int x=0;
	int p=1;
	int m=0;
	for(int i=0;i<n;i++)
    {
        printf("Enter the Number of index [%d] : ",i);
        scanf("%d",&x);
        if(i==0)
        {
            a[i]=x;
        }
        else
        {
            for(int j=i;j>-1;j--)
            {
            if(x==a[j]){p=0;m++;break;}
            }
            if(p==1){a[i]=x;}
        }
        p=1;
    }
    // Output
    printf("The Unique elements are : ");
    for(int i=0;i<n-m;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
 }
