#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[51];
    printf("Enter your String here (Max=50) : ");
    fgets(s,50,stdin);
    char c[51];
    int i;
    for(i=0;s[i]!=0;i++)
    {
        c[i]=s[i];
    }
    c[i]=s[i]; // Add Null to make it String
    puts(c);
    return 0;
}
