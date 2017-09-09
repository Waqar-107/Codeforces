/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,ll>
#define inf 1000000000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m;
    string s;

    cin>>n>>s;

    for(i=0;i<n;i++)
    {
        if(s[i]=='L')
        {
            for(j=i-1;j>=0;j--)
            {
                if(s[j]=='@')
                    break;

                s[j]='@';
            }
        }

        else if(s[i]=='R')
        {
            m=-1;
            for(j=i+1;j<n;j++)
            {
                if(s[j]=='L')
                {
                    m=j;break;
                }
            }

            if(m==-1)
            {
                for(j=i+1;j<n;j++)
                    s[j]='@';
            }

            else
            {
                for(j=i+1;j<=m;j++)
                    s[j]='@';

                if((m-i+1)%2)
                {
                    s[(m+i)/2]='.';
                }
            }
        }
    }

    m=0;
    for(i=0;i<n;i++)
    {
        //cout<<s[i];
        if(s[i]=='.')
            m++;
    }

    cout<<m;

    return 0;
}
