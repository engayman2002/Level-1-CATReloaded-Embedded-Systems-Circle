#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str="ayman mohamed elashry";
    while(*str!='\0')
    {
        if((*str>=97) && (*str<=122))
        {
            printf("%c",(*str++-32));
            continue;
        }
        printf("%c",*str++);
    }

    return 0;
}
