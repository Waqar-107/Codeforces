/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>

using namespace std;

struct data
{
    int cnt=0,l=1000000,r=-1;
} ;

int main()
{
    //freopen("in.txt","r",stdin);

    int i,j,k;
    int n,x;

    cin>>n;

    map<int,data> mp;
    for(i=0;i<n;i++)
    {
        cin>>x;
        mp[x].cnt++;
        mp[x].l=min(i,mp[x].l);
        mp[x].r=max(i,mp[x].r);
    }

    data fs;
    int mx=0,ms=0;
    map<int,data>::iterator p=mp.begin();
    while(p!=mp.end())
    {
        data d=p->second;
        if(d.cnt>mx)
        {
            mx=d.cnt;
            fs=d;ms=d.r-d.l;
        }

        else if(d.cnt==mx)
        {
            if(d.r-d.l<ms)
            {
                mx=d.cnt;
                ms=d.r-d.l;
                fs=d;
            }
        }

        p++;
    }

    cout<<(fs.l+1)<<" "<<(fs.r+1);

    return 0;
}
