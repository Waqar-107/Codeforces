/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<ll,ll>

using namespace std;

int main()
{
    freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m,q;
    int r,c,mx,sum;

    cin>>n>>m>>q;

    ll a[n][m];

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin>>a[i][j];
    }

    int x[n];
    memset(x,0,sizeof(x));

    //initial max
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<m;j++)
        {
            if(a[i][j])
                sum++;
            else
                x[i]=max(x[i],sum),sum=0;
        }

        x[i]=max(x[i],sum);
    }


    for(k=0;k<q;k++)
    {
        cin>>r>>c;
        r--;c--;

        a[r][c]=!a[r][c];

        sum=0;mx=0;
        for(i=0;i<m;i++)
        {
            if(a[r][i])
                sum++;
            else
                mx=max(mx,sum),sum=0;
        }

        mx=max(mx,sum);
        x[r]=mx;

        mx=0;
        for(i=0;i<n;i++)
            mx=max(x[i],mx);

        cout<<mx<<endl;
    }


    return 0;
}
