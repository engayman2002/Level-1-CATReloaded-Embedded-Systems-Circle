#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Take Inputs
	int n=0,m=0;
	printf("Please Enter the size of The Array : ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[n];
    b[0]=a[0];
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<m+1;j++)
        {
            if(b[j]==a[i])
            {
                break;
            }
            if(j==m)
            {
                b[++m]=a[i];
            }
        }
    }
    for(int i=0;i<m+1;i++)
    {
        printf("%d ",b[i]);
    }

    return 0;
 }
