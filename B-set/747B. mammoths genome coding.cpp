/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>

#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
        ll i,j,k;
        ll n,a=0,t=0,g=0,c=0,q=0;
        string s;

        cin>>n>>s;

        if(n%4!=0)
        {
            cout<<"==="<<endl;
            return 0;
        }

        for(i=0;i<n;i++)
        {
            if(s[i]=='A')
                a++;
            else if(s[i]=='T')
                t++;
            else if(s[i]=='C')
                c++;
            else if(s[i]=='G')
                g++;
            else
                q++;
        }

        ll r=n/4;
        ll ra=abs(r-a), rt=abs(r-t), rg=abs(r-g), rc=abs(r-c);

        if((ra+rt+rg+rc)!=q)
        {
            cout<<"===";
            return 0;
        }

        string x;
        for(i=0;i<ra;i++)
            x.push_back('A');

        for(i=0;i<rt;i++)
            x.push_back('T');

        for(i=0;i<rg;i++)
            x.push_back('G');

        for(i=0;i<rc;i++)
            x.push_back('C');

        j=0;
        for(i=0;i<n;i++)
        {
            if(s[i]!='?')
                cout<<s[i];
            else
            {
                cout<<x[j];
                j++;
            }
        }

        return 0;
}
