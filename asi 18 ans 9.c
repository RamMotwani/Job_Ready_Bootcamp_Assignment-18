#include<stdio.h>
int main()
{
    char str[100]="i king";
    reverse(str);
    return 0;
}
void reverse (char str[])
{
    int length,i;
    length=strlen(str);
    for(i=length-1;i>=0;i--)
    {
        if(str[i]==' ')
        {
            str[i]='\0';
            printf("%s ",&str[i]+1);
        }
    }
    printf("%s",str);
}
