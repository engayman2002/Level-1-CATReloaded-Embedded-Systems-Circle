#include <stdio.h>
#include <stdlib.h>

int Get_Max(int m,int n)
{
    return m>n?m:n;
}

int main()
{
    int m,n;
    printf("Enter the First Number here : ");
    scanf("%d",&m);
    printf("Enter the Second Number here : ");
    scanf("%d",&n);
    printf("The Maximum Number = %d",Get_Max(m,n));
    return 0;
}
