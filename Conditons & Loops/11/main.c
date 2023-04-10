#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height;
    printf("Enter the height of The Pyramid here : ");
    scanf("%d",&height);
    int points=2*height-1;
    for(int i=1;i<(points+1);i+=2)
    {
        for(int j=0;j<(points-i)/2;j++)
        {
            printf(" ");
        }
        for(int j=0; j<i ; j++)
        {
            printf("*");
        }
        for(int j=0;j<(points-i)/2;j++)
        {
            printf(" ");
        }

        printf("\n");
    }
    return 0;
}
