#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
        ll i,j;
        ll n1,n2;
        ll k,m;

        cin>>n1>>n2;
        cin>>k>>m;

        ll a[n1],b[n2];

        for(i=0;i<n1;i++)
            cin>>a[i];

        for(i=0;i<n2;i++)
            cin>>b[i];
//cout<<(n2-m)<<"  "<<(k-1)<<endl;
        if(b[n2-m]>a[k-1])
            cout<<"YES";
        else
            cout<<"NO";

        return 0;
}

