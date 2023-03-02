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
    printf("Enter The Required Character here : ");
    char rc;scanf("%c",&rc);
    int i=0;
    printf("'%c' is found at index",rc);

    while(*str!='\0')
    {
        if(rc == *str)
        {
            printf(" %d",i);
            return 0;
        }
        i++;
        str++;
    }
    printf(" (Oops ! it's not here)");
}
