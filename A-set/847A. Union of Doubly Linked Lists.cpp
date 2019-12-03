/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 150
#define inf 1e9

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

pp a[N];

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;
    int l, r;

    sf(n);

    vector<int> vec, vec2;
    for(i = 1; i <= n; i++)
    {
        sff(l, r);

        a[l].second = i;
        a[r].first = i;

        if(!l)
            vec.pb(i);
    }

    for(int e : vec)
    {
        while(e)
        {
            k = e;
            e = a[e].second;
        }

        vec2.pb(k);
    }

    for(i = 0; i < vec.size() - 1; i++)
    {
        a[vec2[i]].second = vec[i + 1];
        a[vec[i + 1]].first = vec2[i];
    }

    for(i = 1; i <= n; i++)
        pff(a[i].first, a[i].second), nl;

    return 0;
}
