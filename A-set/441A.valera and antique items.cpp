#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll i,j,k;
    ll n,v,m,count=0;
    vector<ll> seller;

    cin>>n>>v;
    for(i=0;i<n;i++)
    {
        cin>>m;
        ll a[m];
        for(j=0;j<m;j++)
            cin>>a[j];

        sort(a,a+m);

        if(a[0]<v)
            {
                count++;
                seller.push_back(i+1);
            }
    }

    cout<<count<<endl;
    for(i=0;i<seller.size();i++)
        cout<<seller[i]<<" ";

    return 0;
}
