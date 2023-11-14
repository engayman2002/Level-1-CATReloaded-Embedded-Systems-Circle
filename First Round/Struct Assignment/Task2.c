#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ulli unsigned long long int

struct student
{
    int p,ds,dm,a;
};

int main()
{
    struct student students[10];
    for(int i=0;i<10;i++)
    {
        students[i].p=(i*3+46);
        students[i].ds=(i*4+30);
        students[i].dm=(i*2+16);
        students[i].a=(i*21+10);
    }
    printf("Enter The User ID ( Choose between 1 to 10 ) here : ");
    int x;
    scanf("%d",&x);
    while(1)
    {
        if(x>0 && x<11){break;}
        else
            {
                printf("Try again ! Enter the Value here ( Choose between 1 to 10 ) : ");
                scanf("%d",&x);
            }
    }
        printf("For The Student with ID %d \n",x);
        printf("The Programming Grade is equal to %d\n",students[x-1].p);
        printf("The Data Structure Grade is equal to %d\n",students[x-1].ds);
        printf("The Discrete Math Grade is equal to %d\n",students[x-1].dm);
        printf("The Algorithms Grade is equal to %d\n",students[x-1].a);

    return 0;
 }
