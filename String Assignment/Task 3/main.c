#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main()
{
    char *str=calloc(1,sizeof(char));
    char t;
    int len;
    printf("Enter your String here : ");
    while(scanf("%c",&t)==1)
    {
        if(t=='\n'){break;}
        len=strlen(str);
        str= realloc(str,len+1);
        *(str+len)=t;
        *(str+len+1)='\0';
    }
    char *i=str;
    while(*i!='\0'){i++;}
    i--;
    printf("The Reversed String : ");
    while( i>=str ){printf("%c",*i--);}
    return 0;
}
