#include<stdio.h>
void upper(char s[])
{
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a' && s[i]<'z')
        {
            s[i]=s[i]-32;
        }
    }
    printf("%s",s);

}


