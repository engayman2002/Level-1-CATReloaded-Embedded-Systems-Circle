#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[3];
    for(int i=0;i<3;i++)
    {
        printf("Enter the %d Number here : ",i+1);
        scanf("%d",&n[i]);
    }
    printf("The Maximum Number = %d",n[0]>n[1]?(n[0]>n[2]?n[0]:n[2]):(n[1]>n[2]?n[1]:n[2]));

    return 0;
}
