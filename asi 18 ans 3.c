#include<stdio.h>
void compare(char s1[] , char s2[])
{
    int i,r;
    for(i=0;s1[i];i++)
    {
       r=s1[i]-s2[i];
       if(r>0)
       {
           printf("%c is in dictionary order \n",s1[i]);
       }
       else if(r<0)
       {
           printf("%c is not in dictionary order \n",s1[i]);
       }
       else
       {
           printf("%c & %c equal\n",s1[i],s2[i]);
       }
    }

}
