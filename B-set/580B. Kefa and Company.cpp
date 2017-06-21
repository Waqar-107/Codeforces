/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define NL printf("\n");

#define inf 1000000000000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    ll i,j,k;
    ll n,d,m;
    ll f,x;

    cin>>n>>d;

    pp a[n];
    for(i=0;i<n;i++)
    {
        cin>>m>>f;
        a[i]={m,f};
    }

    sort(a,a+n);

    ll pre[n+1],b[n];
    pre[0]=0;
    pre[1]=a[0].second;

    for(i=2;i<=n;i++)
        pre[i]=(pre[i-1]+a[i-1].second);

    for(i=0;i<n;i++)
        b[i]=a[i].first;

    m=0;
    for(i=0;i<n;i++)
    {
        f=b[i]+d-1;
        j=upper_bound(b,b+n,f)-b;

        while(j>=1)
        {
            if(b[j-1]>f)
                j--;
            else
                break;
        }


        //friendship factor
        k=(pre[j]-pre[i]);

        m=max(m,k);
        //cout<<j<<endl;
    }

    cout<<m;

    return 0;
}
