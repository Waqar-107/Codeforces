/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 2010
#define inf 100000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>
#define mod 1000000007

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    ll i, j, k;
    ll n, m, curr, curr2;

    sffl(n, m), sfl(k);

    ll p[m];
    for(i = 0; i < m; i++)
        sfl(p[i]);

    ll pg = -1;
    ll ans = 0;

    i = 0;
    while(i < m)
    {
        ans++;
        //cout<<i<<" "<<p[i];nl;
        curr = (p[i] - i);

        // current page no. of i
        if(curr % k)
            curr = curr / k + 1;
        else
            curr /= k;

        for(j = i + 1; j < n; j++){
            curr2 = p[j] - i;

            // current page no. of j
            if(curr2 % k)
                curr2 = curr2 / k + 1;
            else
                curr2 /= k;

            if(curr2 != curr)
                break;
        }

        i = j;
    }

    pfl(ans);

    return 0;
}
