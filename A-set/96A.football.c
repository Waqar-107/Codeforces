#include<stdio.h>
#include<string.h>
int main()
{
        int l,i,j,count=0,flag=0;
        char s[100];

        gets(s);
        l=strlen(s);

        for(i=0;i<l;i++)
        {
            for(j=i+1;j<l;j++)
            {
                if(s[i]!=s[j])
                    break;
                else
                    count++;
            }

            if(count==6)
            {
                flag=1;
                break;
            }

            else
                count=0;
        }

        if(flag==1)
            printf("YES");
        else
            printf("NO");

        return 0;
}
