#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],j;
    int i,sum1=0,sum2=0,flag=0;

    gets(s);

    for(i=0; i<strlen(s); i++)
    {
        flag=0;
        for(j='a'; j<='z'; j++)
        {
            if(j==s[i])
                {
                    sum1++;         //calculation of lowercase
                    flag=1;
                    break;
                }
        }

        if(flag!=1)
        {
            for(j='A'; j<='Z'; j++)
            {
                if(j==s[i])
                    {
                        sum2++;         //calculation of uppercase
                        break;
                    }
            }
        }
    }

    if(sum1>=sum2)
    {
        for(i=0; i<strlen(s); i++)
        {
            s[i]=tolower(s[i]);
        }
    }

    else
    {
        for(i=0; i<strlen(s); i++)
        {
            s[i]=toupper(s[i]);
        }
    }

    puts(s);

    return 0;
}
