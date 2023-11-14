#include <stdio.h>
#include <stdlib.h>

int fun(int s,int m,int num)
{
    if(m!=num && m<=num)
    {
        printf("%d ",m);
        int temp=m;
        m+=s;
        s=temp;
        fun(s,m,num);
    }
    if(s+m==num){printf("%d",num);}
}
int main()
{
    int num;
    printf("Please Enter the Number here : ");
    scanf("%d",&num);
    if(num<0){printf("Error");return 0;}
    printf("0 ");
    fun(0,1,num);
    return 0;
}
