#include<stdio.h>
#include<string.h>
int main()
{
        int i,j;
        char s[100];

        gets(s);

        for(i=strlen(s)-1;i>=0;i--)
        {
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') )
            {
                if(s[i]=='A' || s[i]=='E' || s[i]=='I'|| s[i]=='O' || s[i]=='U' || s[i]=='Y' || s[i]=='a' || s[i]=='e' || s[i]=='i'|| s[i]=='o' || s[i]=='u' || s[i]=='y')
                {
                    printf("YES");
                    break;
                }
                else
                {
                    printf("NO");
                    break;
                }
            }
        }

        return 0;
}
