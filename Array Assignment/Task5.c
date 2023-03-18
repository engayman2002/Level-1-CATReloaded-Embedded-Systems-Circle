#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ulli unsigned long long int

int main()
{
    // Take Inputs
	int a[5][5];
	for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int row[5],col[5];
    // Operation

    for(int i=0;i<5;i++)
    {
        row[i]=0;
        for(int j=0;j<5;j++)
        {
            row[i]+=a[i][j];
        }
    }

    for(int i=0;i<5;i++)
    {
        col[i]=0;
        for(int j=0;j<5;j++)
        {
            col[i]+=a[j][i];
        }
    }

    // Output
    printf("Row totals : ");
    for(int j=0;j<5;j++)
    {
        printf("%d ",row[j]);
    }
    printf("\nColumns totals : ");
    for(int j=0;j<5;j++)
    {
        printf("%d ",col[j]);
    }
    return 0;
 }
