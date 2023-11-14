#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id,pass;// ID = 1234 , Pass = 5678
    printf("Enter your ID here : ");
    scanf("%d",&id);
    if(id!=1234){printf("You are not registered");return 0;}
    for(int i=0;i<3;i++)
    {
        printf("Please Enter The Password here : ");
        scanf("%d",&pass);
        if(pass==5678)
        {
            printf("welcomes him");
            return 0;
        }
        if(i!=2){printf("Try Again!\n");}
    }
    printf("Nomore tries.");
    return 0;
}
