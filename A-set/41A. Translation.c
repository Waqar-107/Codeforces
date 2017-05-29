#include<stdio.h>
#include<string.h>
int main()
{
        char s[1000],t[1000];

        gets(s);
        gets(t);


        if(strcmp(s,strrev(t))==0)
            printf("YES");
        else
            printf("NO");

        return 0;
}
