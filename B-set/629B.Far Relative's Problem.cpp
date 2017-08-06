/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>

using namespace std;

struct data
{
    int l,r;
    char g;
};

int main()
{
    //freopen("in.txt","r",stdin);

    ll i,j,k;
    ll n,m,f;

    cin>>n;
    data a[n];

    for(i=0;i<n;i++)
        cin>>a[i].g>>a[i].l>>a[i].r;

    ll M=0;
    for(i=1;i<=366;i++)
    {
        f=0,m=0;
        for(j=0;j<n;j++)
        {
            if(i>=a[j].l && i<=a[j].r)
            {
                if(a[j].g=='M')
                    m++;
                else
                    f++;
            }
        }

        M=max(M,2*min(m,f));
    }

    cout<<M;

    return 0;
}
