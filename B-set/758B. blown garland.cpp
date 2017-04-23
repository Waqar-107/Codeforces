/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>
#define dbg printf("xxxx");
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
    ll i,j,k;
    ll n;
    string s;
    ll y=0,r=0,b=0,g=0;
    ll yc=-1,rc=-1,bc=-1,gc=-1;

    cin>>s;
    n=s.length();

    for(i=0;i<n;i+=4)
    {
        k=1;
        for(j=i;j<i+4;j++)
        {
            if(s[j]=='Y')
                yc=k;
            else if(s[j]=='R')
                rc=k;
            else if(s[j]=='B')
                bc=k;
            else if(s[j]=='G')
                gc=k;

            k++;
        }
    }

    for(i=0;i<n;i+=4)
    {
        k=1;
        for(j=i;j<i+4;j++)
        {
            if(s[j]=='!')
            {
                if(k==yc)
                    y++;
                else if(k==rc)
                    r++;
                else if(k==gc)
                    g++;
                else if(k==bc)
                    b++;
            }

            k++;
        }
    }

    cout<<r<<" "<<b<<" "<<y<<" "<<g;
    return 0;
}
