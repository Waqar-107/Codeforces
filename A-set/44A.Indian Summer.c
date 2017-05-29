#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{
        int i,j,k;
        int count=0;
        int n;


        cin>>n;
        char s[n][25],s2[25];

        for(i=0;i<=n;i++)
            {
                gets(s[i]);
            }

       /* printf("%s\n",s[1]);
        printf("%s\n",s[2]);
        printf("%s\n",s[3]);*/


        for(i=0;i<=n;i++)
        {
                for(j=i+1;j<=n;)
                {
                        if(strcmp(s[i],s[j])==0)
                        {
                            for(k=j;k<n;k++)
                            {
                                strcpy(s[k],s[k+1]);
                            }
                            n--;
                        }
                        else
                            j++;

                }
        }
        cout<<n;

        return 0;
}
