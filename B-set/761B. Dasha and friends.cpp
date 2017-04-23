/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;
#define pp pair<ll,ll>
#define ppp pair<ll,pp>
#define dbg printf("x");
#define inf 1000000000000
#define max2(a,b) ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b) ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)

using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    int i,j,k;
    int n,l;

    cin>>n>>l;
    int a[n],b[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    for(i=0;i<n;i++)
        cin>>b[i];

    queue<int > ds;
    queue<int>  kf;

    for(i=1;i<n;i++)
    {
        ds.push(a[i]-a[i-1]);
    }

    ds.push(l-a[n-1]+a[0]);



    for(i=1;i<n;i++)
    {
        kf.push(b[i]-b[i-1]);
    }

    kf.push(l-b[n-1]+b[0]);


    while(n)
    {
        if(ds==kf)
        {
            cout<<"YES";
            return 0;
        }

        i=ds.front();ds.pop();ds.push(i);n--;
    }

    cout<<"NO";

    return 0;
}

