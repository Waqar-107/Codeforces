/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>
#define inf 1000000007
#define dbg cout<<"tttt"<<endl;
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
        //freopen("in.txt","r",stdin);
        ll i,j,k;
        ll n,m,count=0;

        cin>>n>>m;
        char s[n+1][m+1];

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>s[i][j];
            }
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(s[i][j]=='W')
                {
                   // cout<<i+1<<" "<<j+1<<" "<<s[i][j-1]<<" "<<s[i-1][j]<<" "<<s[i+1][j]<<" "<<s[i][j+1]<<endl;
                    //left
                    if(s[i][j-1]=='P')
                    {
                        s[i][j-1]='.';
                        count++;continue;
                    }

                    //up
                    else if(s[i-1][j]=='P')
                    {
                        s[i-1][j]='.';
                        count++;continue;
                    }

                    //down
                    else if(s[i+1][j]=='P')
                    {
                        s[i+1][j]='.';
                        count++;continue;
                    }

                    //right
                    else if(s[i][j+1]=='P')
                    {
                        s[i][j+1]='.';
                        count++;continue;
                    }
                }
            }
        }

        cout<<count<<endl;
        return 0;
}
