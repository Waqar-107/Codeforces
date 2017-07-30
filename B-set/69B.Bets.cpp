/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>
typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define inf 1000000000
#define pp pair<int,int>

using namespace std;

struct ath
{
    int l,r,t,d,i;
};

bool cmp(ath a, ath b)
{
    if(a.t==b.t)
        return a.i<b.i;

    return a.t<b.t;
}

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m;

    cin>>n>>m;

    ath a[m];
    for(i=0;i<m;i++)
        cin>>a[i].l>>a[i].r>>a[i].t>>a[i].d,a[i].i=i;

    sort(a,a+m,cmp);

    int mon[n];
    memset(mon,0,sizeof(mon));

    for(i=0;i<m;i++)
    {
        for(j=a[i].l-1;j<a[i].r;j++)
        {
            if(!mon[j])
                mon[j]=a[i].d;
        }
    }

    int sum=0;
    for(i=0;i<n;i++)
        sum+=mon[i];

    cout<<sum;

    return 0;
}
