/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 100100

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<string,int>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;

    sf(n);
    set<int> s;
    map<int,int> mp;

    int a[n];
    for(i=0;i<n;i++)
        sf(a[i]), s.insert(a[i]), mp[a[i]]++;

    int ans=1000000000;
    for(i=0;i<n;i++)
    {
        mp[a[i]]--;
        if(mp[a[i]]==0)
            s.erase(a[i]);

        auto itr1=s.begin();
        auto itr2=s.rbegin();

        k=*itr2-*itr1;
        ans=min(ans,k);

        mp[a[i]]++;
        s.insert(a[i]);
    }

    pf(ans);

    return 0;
}
