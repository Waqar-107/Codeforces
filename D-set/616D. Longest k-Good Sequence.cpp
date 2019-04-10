/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1000100
#define inf 1e18

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
#define pp pair<int, int>

using namespace std;

int mp[N];
int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, cnt, mx;
    pp ans;

    sff(n, k);

    int a[n];
    for(i = 0; i < n; i++)
        sf(a[i]);

    i = 0, j = 1;
    cnt = 1, mx = 1, ans = {1, 1};
    memset(mp, 0, sizeof(mp));
    mp[a[0]] = 1;

    while(i < n && j < n)
    {
        //can't take j
        if(cnt == k && !mp[a[j]])
        {
            if(mx < (j - i))
            {
                mx = j - i;
                ans = {i + 1, j};
            }

            mp[a[i]]--;
            if(mp[a[i]] == 0)
                cnt--;

            i++;
        }

        //take j
        else
        {
            if(!mp[a[j]])
                cnt++;

            mp[a[j]]++;
            j++;
        }
    }

    if(mx < (j - i))
        mx = j - i, ans = {i + 1, j};

    pff(ans.first, ans.second);

    return 0;
}
