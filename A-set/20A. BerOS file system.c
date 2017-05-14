#include<stdio.h>
#include<string.h>
int main()
{
        char s[100];
        int i,j,k=0,l;
        int count;

        scanf("%s",s);
        l=strlen(s);
        char w[l],r[l];
        strcpy(w,s);

        for(i=0;i<l;)
        {
                count=0;
                if(w[i]=='/')
                {
                    r[k]='/';
                    k++;
                    for(j=i+1;j<w;j++)
                    {
                        if(w[j]=='/')
                        {
                            count++;
                        }

                        else
                        {
                             i=i+count+1;
                             break;
                        }
                    }
                }
                else
                    {
                        r[k]=w[i];
                        k++;
                        i++;
                    }
        }

        if(r[k-1]=='/' && k>1)
        {
            for(i=0;i<k-1;i++)
            {
                printf("%c",r[i]);
            }
        }

        else
        {
             for(i=0;i<k;i++)
            {
                printf("%c",r[i]);
            }
        }


        return 0;
}
