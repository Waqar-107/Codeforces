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
    ll i,j,k;
    ll n,m,min;
    string t,s;

    cin>>n>>m;
    cin>>s>>t;

    min=inf;
    vector<ll> v;
    vector<ll> temp;

    for(i=0;i<=m-n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(s[j]!=t[i+j])
            {
                temp.push_back(j+1);
            }
        }

        if(min>temp.size())
        {
            min=temp.size();
            v=temp;
        }

        temp.clear();
    }

    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++)
        cout<<v[i]<<" ";

    return 0;
}
