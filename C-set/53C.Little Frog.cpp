/*****from dust i have come, dust i will be*****/

#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>
#define dbg printf("in\n");
#define inf 1000000000000

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    int i,j,k;
    int n,cur;

    cin>>n;

    int t=n;
    k=n-1;cur=1;
    map<int,int> mp;

    while(t--)
    {
        cout<<cur<<" ";
        mp[cur]++;

        if(cur+k>n && mp[cur-k]==0)
        {
            cur-=k;k--;
        }

        else if(cur+k<=n && mp[cur+k]==0)
        {
            cur+=k;k--;
        }

        else if(mp[cur+k]==0)
        {
            cur+=k;k--;
        }

        else
        {
            cur-=k;k--;
        }
    }

    return 0;
}
