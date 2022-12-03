#include<stdio.h>
void reverse(char s[])
{
    int i,length;
    for(length=0;s[length];length++)
    {
    }
    for(i=length-1;i>=0;i--)
    {
        printf("%c",s[i]);
    }
}
