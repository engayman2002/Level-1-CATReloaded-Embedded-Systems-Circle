#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[50];
    printf("Enter binary number: ");
    gets(c);
    int num;
    int i,index=-1,j,size=0;
    for(i=0;c[i]!=0;i++){size++;}
    int sum=0;
    for(i=size;i>-1;i--)
    {
        if(c[i]=='1')
        {
            num=1;
            for(j=0;j<index;j++)
            {
                num*=2;
            }
            sum+=num;
        }
        index++;
    }
    printf("%s in binary = %d in decimal",c,sum);
    return 0;
}
