#include<bits/stdc++.h>

typedef long long int ll;

#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
        ll i,j,k;
        ll n,c=0,p=0;

        map<int,int> mp;

        cin>>n;
        char a[n];
        ll x[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i]>>x[i];
            if(a[i]=='-' && mp[x[i]]==0)
            {//cout<<a[i]<<"  "<<mp[x[i]]<<endl;
                p++;
                mp[x[i]]++;
            }

            else if(a[i]=='+' && mp[x[i]]==0)
                mp[x[i]]++;
        }

        c=p;
        //cout<<c;
        for(i=0;i<n;i++)
        {
            if(a[i]=='+')
            {
                p++;
                if(c<p)
                    c++;
            }

            else
            {
                p--;
                mp[x[i]]--;
            }
        }

        cout<<c<<endl;

        return 0;
}
