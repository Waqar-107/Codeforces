/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define NL printf("\n");

#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

#define inf 1000000000000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k,x;
    ll n,r,c;

    cin>>n;
    ll a[n][n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cin>>a[i][j];
    }

    bool f;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            f=false;
            if(a[i][j]==1)
            {
                f=true;
                continue;
            }

            else
            {
                x=a[i][j];
                for(r=0;r<n;r++)
                {
                    for(c=0;c<n;c++)
                    {
                        if(a[i][r]+a[c][j]==x)
                        {
                            f=true;
                            break;
                        }
                    }

                    if(f)
                        break;
                }

                if(!f)
                {
                    cout<<"No";return 0;
                }
            }
        }
    }

    cout<<"Yes";

    return 0;
}
