#include<stdio.h>
#include<string.h>
int main()
{
        int i;
        char s[1000];
        gets(s);

        s[0]=toupper(s[0]);

        puts(s);

        return 0;
}
