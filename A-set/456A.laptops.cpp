#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
        ll i,j,k;
        ll n,a,b;
        bool f=false;

        cin>>n;
        pair<ll,ll> s[n];

        for(i=0;i<n;i++)
        {
            cin>>a>>b;
            s[i]=make_pair(a,b);
        }

        sort(s,s+n);

        for(i=n-1;i>0;i--)
        {
            if(s[i].second>s[i-1].second)
                continue;
            else
            {
                f=true;
                break;
            }
        }

        if(f==true)
            cout<<"Happy Alex"<<endl;
        else
            cout<<"Poor Alex"<<endl;

        return 0;

}
