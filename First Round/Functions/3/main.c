#include <stdio.h>
#include <stdlib.h>


int main()
{
    char a[20]={0};
    scanf("%s",a);
    int d=0;
    for(int i=0;i<20;i++)
    {
        if(a[i]!='\0')
        {
            d++;
        }
        else
        {
            break;
        }
    }
    printf("The Number of digits = %d",d);
    return 0;
}
