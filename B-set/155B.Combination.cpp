/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>
#define inf 10000000

using namespace std;

bool cmp(pp a, pp b)
{
    if(a.second==b.second)
        return a.first>b.first;

    return a.second>b.second;
}

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n,x,sum=0;

    cin>>n;

    pp a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }

    sort(a,a+n,cmp);

    i=0;x=1;
    while(x>0 && i<n)
    {
        x--;
        sum+=a[i].first;
        x+=a[i].second;

        i++;
    }

    cout<<sum;

    return 0;
}
