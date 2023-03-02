#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str="a412 b&@#0 678!";
    int a=0,d=0,s=0;
    while(*str!='\0')
    {
        if(  ((*str>=65) && (*str<=90)) || ( (*str>=97) && (*str<=122) ) ){a++;}
        else if( (*str>=48) && (*str<=57) ){d++;}
        else {s++;}
        str++;
    }
    printf("Alpha = %d , Digits = %d , Special = %d",a,d,s);

    return 0;
}
