#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Enter the size of the array : ");
    scanf("%d",&n);

    int a[n];

    printf("Enter the elements here : ");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the Position to delete : ");
    int pos;
    scanf("%d",&pos);
    pos--;
    if(pos>-1 && pos<n)
    {
        for(int i=0;i<n;i++)
        {
            if(i==pos)
                continue;
            else
                printf("%d ",a[i]);
        }
    }
    else
    {
        printf("The Position that you entered is invalid");
    }

    return 0;
}
