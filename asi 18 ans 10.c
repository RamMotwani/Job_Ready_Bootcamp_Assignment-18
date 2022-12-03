#include<stdio.h>
int main()
{
    char s[10]="amar";
    printf("%s\n",s);
    int  repeated[150]={0};
    int i;
    for(i=0;s[i];i++)
    {
        repeated[s[i]]++;
    }
    for(i=0;i<150;i++)
    {
        if(repeated[i]>1)
        {
            printf("%c is repeated \n",i,repeated[i]);
        }
    }
return 0;
}
