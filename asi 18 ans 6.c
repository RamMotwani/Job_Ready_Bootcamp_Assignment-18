#include<stdio.h>
void alphanumeric(char s[])
{
    int i;
    for(i=0;s[i];i++)
    {
        if((s[i]>='0' && s[i]<'9'))
            {
                printf("string is an alphanumeric string");
                break;
            }


    }
    if(s[i]=='\0')
    {
        printf("it is an character string");
    }



}
