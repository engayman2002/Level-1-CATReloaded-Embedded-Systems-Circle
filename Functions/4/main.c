#include <stdio.h>
#include <stdlib.h>

int Login(int id,int pass)
{
    if(id!=1234)
    {
        return 0;
    }
    if(pass!=5678)
    {
        for(int i=0;i<3;i++)
        {
            printf("Try again!\n");
            printf("Enter your Password here : ");
            scanf("%d",&pass);
            if(pass==5678){return 1;}
        }
    }
}

int main()
{
    int id,pass;
    printf("Enter your ID here : ");
    scanf("%d",&id);
    printf("Enter your Password here : ");
    scanf("%d",&pass);
    Login(id,pass)?printf("welcome"):printf("Invalid Input");

    return 0;
}
