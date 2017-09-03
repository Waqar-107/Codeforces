/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n;
    ll a,b,x,m;
    ll l,r,m2;

    scanf("%I64d%I64d",&a,&b);
    scanf("%d",&n);

    m=min(a,b);
    m2=max(a,b);

    set<ll> s;
    for(i=1;i<=sqrt(m);i++)
    {
        if(m%i==0)
            s.insert(m/i),s.insert(i);
    }

    vector<ll> v;
    set<ll>::iterator p=s.begin();
    while(p!=s.end())
    {
        v.push_back(*p);
        p++;
    }

    for(i=0;i<n;i++)
    {
        scanf("%I64d%I64d",&l,&r);

        x=-1;
        for(j=0;j<v.size();j++)
        {
            if(v[j]>r)
                break;

            if(v[j]>=l && v[j]<=r && m2%v[j]==0)
                x=v[j];
        }

        printf("%I64d\n",x);
    }

    return 0;
}
