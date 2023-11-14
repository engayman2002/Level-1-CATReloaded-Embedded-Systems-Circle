#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    printf("Enter %d elements in array: ",n);
    int a[n];
    int i;
    int e=0,o=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]&1)
        {
            o++;
        }
        else
        {
            e++;
        }
    }
    printf("Total even elements: %d\n",e);
    printf("Total odd elements: %d\n",o);
    return 0;
}
