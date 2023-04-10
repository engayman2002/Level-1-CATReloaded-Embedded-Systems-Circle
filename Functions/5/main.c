#include <stdio.h>
#include <stdlib.h>

void fun(int num)
{
    int s1=0,s2=1;
    printf("%d ",s1);
    while(s2!=num)
    {
        int temp;
        temp=s1;
        s1=s2;
        s2+=temp;
        printf("%d ",s2);
    }
}
int main()
{
    int num;
    printf("Please Enter the Number here : ");
    scanf("%d",&num);
    if(num==0)
    {
        printf("0");
        return 0;
    }
    else if(num==1)
    {
        printf("0 1");
        return 0;
    }
    else
    {
        fun(num);
    }
    return 0;
}
