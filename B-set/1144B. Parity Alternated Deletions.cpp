/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 2500
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
#define pp pair<ll , ll>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, sum = 0, sum2;

    sf(n);

    vector<int> odd, even;
    for(i = 0; i < n; i++)
    {
        sf(m);
        if(m % 2)
            odd.pb(m);
        else
            even.pb(m);

        sum += m;
    }

    sort(odd.begin(), odd.end(), greater<int>());
    sort(even.begin(), even.end(), greater<int>());

    int mn = sum;

    //odd
    k = 1, i = 0, j = 0, sum2 = sum;
    while(true)
    {
        if(odd.size() && k && i < odd.size())
            sum2 -= odd[i], i++;

        else if(even.size() && !k && j < even.size())
            sum2 -= even[j], j++;

        else
            break;

        k = 1 - k;
    }

    mn = min(mn, sum2);

    //even
    k = 0, i = 0, j = 0, sum2 = sum;
    while(true)
    {
        if(odd.size() && k && i < odd.size())
            sum2 -= odd[i], i++;

        else if(even.size() && !k && j < even.size())
            sum2 -= even[j], j++;

        else
            break;

        k = 1 - k;
    }

    mn = min(mn, sum2);

    pf(mn);

    return 0;
}
