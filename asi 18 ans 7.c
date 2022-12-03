#include<stdio.h>
int main()
{
    char str[10]="rar";
    palindrome(str);
}
void palindrome(char s[])
{
    int i,l;
    l=strlen(s);
    for(i=0;s[i];i++)
    {
        if(s[i]==s[l-1-i])
        {
            printf("%c",s[i]);
        }
        else
        {
            break;
        }
    }
    if(i==l)
    {
        printf("\n palindrome");
    }
    else
    {
        printf("%s\n not palindrome",s);
    }

}
