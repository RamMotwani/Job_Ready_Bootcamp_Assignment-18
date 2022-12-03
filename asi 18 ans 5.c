#include<stdio.h>
void lower(char s[])
{
    int i;
    for(i=0;s[i];i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
    }
    printf("%s",s);
}
