/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<int,int>
#define dbg printf("in\n");
#define NL printf("\n");

#define inf 1000000000000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m,x;

    cin>>n>>m;
    string s[n],a[n];

    for(i=0;i<n;i++)
        cin>>s[i],a[i]=s[i];

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            x=0;
            for(k=0;k<m;k++)
            {
                if(s[i][j]==s[i][k] && j!=k)
                    a[i][k]='#',x++;
            }

            for(k=0;k<n;k++)
            {
                if(s[i][j]==s[k][j] && i!=k)
                    a[k][j]='#',x++;
            }

            if(x)
                a[i][j]='#';
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]!='#')
                cout<<a[i][j];
        }
    }

    return 0;
}
