#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter any number: ");
    scanf("%d",&x);
    int o=0;
    while(x!=0)
    {
        if(x&1)
        {
            o++;
        }
        x=x>>1;
    }

    printf("Total zero bit is %d\n",32-o);
    printf("Total one bit is %d\n",o);
    getchar();getchar();
    return 0;
}
