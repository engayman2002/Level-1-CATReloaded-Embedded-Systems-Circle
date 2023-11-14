#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ulli unsigned long long int

int main()
{
    // Take Inputs
	int n;
	printf("Please Enter the size of The Array : ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
    {
        printf("Enter the Number of index [%d] : ",i);
        scanf("%d",&a[i]);
    }
    printf("Choose if you want to sort ascending (0) or descending (1) : ");
    int z;
    scanf("%d",&z);

    // Sort
    for(int i=0;i<n-1;i++)
    {
        int temp;
        for(int j=0;j<n-1;j++)
        {
            temp=a[j];
            if(a[j+1]>a[j])
            {
                if(z)
                {
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
            else
            {
                if(!z)
                {
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
    }


    // Output
    z?printf("After descending\n"):printf("After ascending\n");
    for(int i=0;i<n;i++)
    {
        printf("the Number of index [%d] = %d\n",i,a[i]);
    }

    return 0;
 }
