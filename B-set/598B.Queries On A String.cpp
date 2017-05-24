/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define NL printf("\n");

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
    ll n,m;
    ll l,r,st;
    string s;

    cin>>s;
    cin>>n;

    for(i=0;i<n;i++)
    {
        string t;
        cin>>l>>r>>k;

        k=k%(r-l+1);

        if(k!=0)
        {
            st=r-k+1;
            st--;

            for(j=st;j<r;j++)
                t.push_back(s[j]);

            for(j=l-1;j<st;j++)
                t.push_back(s[j]);

            ll idx=0;
            for(j=l-1;j<r;j++)
                s[j]=t[idx],idx++;
        }
    }

    cout<<s;

    return 0;
}
