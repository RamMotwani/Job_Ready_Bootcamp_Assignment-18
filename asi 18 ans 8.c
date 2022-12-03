#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],l;
    printf("enter words in string\n");
    fgets(s,100,stdin);

    int i,count=0,word;
    for(i=0;s[i];i++)
    {
        if( (s[i]>='a'&&s[i]<='z') || (s[i]>='A'&&s[i]<='Z') )
        {
            if(s[i+1]==32)
            {
                count++;
            }

        }
    }
    for(l=0;s[l];l++);
    if(s[l-2]==32)
       count--;
    word=count+1;
    printf("%d word in a string",word);
    return 0;


}

