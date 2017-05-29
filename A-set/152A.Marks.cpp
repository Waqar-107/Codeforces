#include<bits/stdc++.h>
#include<string.h>
#include<cstdlib>
using namespace std;
int main()
{
        int i,j,k;
        int n,m;
        int count=0;


        cin>>n>>m;
        char a[n][m],ch[n],max;
        int s[n];

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>a[i][j];
            }

            s[i]=0;
        }

        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                ch[j]=a[j][i];
            }

            sort(ch,ch+n);
            max=(ch[n-1]);

            for(j=0;j<n;j++)
            {
                if(a[j][i]==max)
                {

                    s[j]++;
                }
            }

        }

        for(i=0;i<n;i++)
        {
            if(s[i]>0)
                count++;
        }

        cout<<count<<endl;

        return 0;
}
