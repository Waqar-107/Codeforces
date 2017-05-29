#include<stdio.h>
#include<string.h>
int main()
{
        int n,i,j,k;
        int c1=0,c2=0;
        char s1[20],s2[20];

        scanf("%d",&n);
        char a[n][20];

        for(i=0;i<n;i++)
        {
                scanf("%s",&a[i]);
        }

        strcpy(s1,a[0]);
        for(i=1;i<n;i++)
        {
                if(strcmp(s1,a[i])!=0)
                {
                    strcpy(s2,a[i]);
                    break;
                }

        }

        for(i=0;i<n;i++)
        {
                if(strcmp(s1,a[i])==0)
                {
                    c1++;
                }

                else
                {
                    c2++;
                }

        }

       if(c1>c2)
        printf("%s",s1);
       else
        printf("%s",s2);

       return 0;
}
