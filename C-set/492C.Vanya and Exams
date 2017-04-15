/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in");
#define NL printf("\n");
#define pi 3.1416

#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,r,avg;
    ll a,b;
    ll target,count=0;

    cin>>n>>r>>avg;


    pp s[n];
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        count+=a;
        s[i]=make_pair(b,a);
    }

    sort(s,s+n);
    target=avg*n-count;

    ll p,tt;
    count=0;
    while(target>0)
    {
        for(i=0;i<n;i++)
        {
            if(s[i].second==r)
                continue;

            p=r-s[i].second;
            tt=p*s[i].first;

            if(p<target)
            {
                target-=p;
                count+=tt;
            }

            else
            {
                count+=(target*s[i].first);
                target=0;
                break;
            }
        }
    }

    cout<<count;

    return 0;
}
