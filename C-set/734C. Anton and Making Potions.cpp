/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 101010
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
#define pp pair<ll, ll>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    ll i, j, k;
    ll n, m, x, s;
    ll temp, z;

    sffl(n, m), sfl(k);
    sffl(x, s);

    pp spellType1[m];
    ll createQuantity[k], createPoint[k];

    for(i = 0; i < m; i++)
        sfl(spellType1[i].first);
    for(i = 0; i < m; i++)
        sfl(spellType1[i].second);

    for(i = 0; i < k; i++)
        sfl(createQuantity[i]);
    for(i = 0; i < k; i++)
        sfl(createPoint[i]);

    ll total = x * n, ans = total;

    // assuming we are using spell type 1 for sure and spell type 2 if we can
    for(i = 0; i < m; i++)
    {
        if(spellType1[i].second > s) continue;
        z = s - spellType1[i].second;

        temp = spellType1[i].first * n;
        ans = min(ans, temp);
        //cout<<"i: "<<i<<" total: "<<temp<<" z: "<<z<<endl;
        // now we try use spell type 2
        j = upper_bound(createPoint, createPoint + k, z) - createPoint;

        if(j == k)
            j--;

        if(createPoint[j] > z) j--;
        if(j < 0) continue;

        // cout<<"j: "<<j<<" "<<createQuantity[j]<<" "<<(spellType1[i].first * createQuantity[j]);
        temp -= (spellType1[i].first * createQuantity[j]);

        ans = min(ans, temp);
        nl;nl;
    }

    // assuming we are not going to use spell type 1 at all
    j = upper_bound(createPoint, createPoint + k, s) - createPoint;
    if(j == k)
        j--;

    if(createPoint[j] > s) j--;

    if(j >= 0)
    {
        temp = total - (x * createQuantity[j]);
        ans = min(ans, temp);
    }

    pfl(ans);

    return 0;
}

