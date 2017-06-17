/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in");
#define NL printf("\n");
#define S 100010
#define inf 1000000000000

using namespace std;

bool prime[S];
void sieve()
{
    memset(prime,1,sizeof(prime));

    prime[0]=prime[1]=0;
    for(int i=4;i<=S;i+=2)
        prime[i]=0;

    for(int i=3;i<=S;i+=2)
    {
        if(prime[i])
        {
            for(int j=i*2;j<=S;j+=i)
            {
                prime[j]=0;
            }
        }
    }
}

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,b,m,y;

    cin>>n>>m;
    ll a[n][m];

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin>>a[i][j];
    }

    sieve();
    ll cur=2;

    //calculating where is the nearest prime
    ll x[S];
    memset(x,0,sizeof(x));
    x[0]=2;x[1]=1;

    for(i=S-1;i>=0;i--)
    {
        if(prime[i])
        {
            cur=i;
            j=i;break;
        }
    }

    for(i=j-1;i>2;i--)
    {
        if(prime[i])
        {
            x[i]=0;
            cur=i;
        }

        else
        {
            x[i]=abs(i-cur);
        }
    }

    //checking the matrix;
    k=inf;

    for(i=0;i<n;i++)
    {
        b=0;
        for(j=0;j<m;j++)
        {
            b+=x[a[i][j]];
        }

        k=min(k,b);
    }

    for(i=0;i<m;i++)
    {
        b=0;
        for(j=0;j<n;j++)
        {
            b+=x[a[j][i]];
        }

        k=min(k,b);
    }

    cout<<k;

    return 0;
}
