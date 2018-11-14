/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
#define N 60

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
#define pp pair<int,int>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int i ,j, k;
    int n, m;

    string s, t;
    map<string, int> mp;

    cin >> s;
    n = s.length();

    for (i = 0; i < n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            //substr(starting position,len)
            if (i + j<= n)
                t = s.substr(i, j), mp[t]++;
        }
    }

    int ans=0;
    auto itr = mp.begin();
    while(itr != mp.end())
    {
        t=itr->first;
        if(itr->second >= 2)
            ans = max( ans, (int)t.length());

        itr++;
    }

    cout << ans;

    return 0;
}
