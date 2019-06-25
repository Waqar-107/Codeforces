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
#define pp pair<char, int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    ll i, j, k;
    ll n, m, x;

    sffl(n, m);

    ll a[n];
    for(i = 0; i < n; i++)
        sfl(a[i]);

    map<ll, ll> mp;

    ll sum = 0, temp, req;
    for(i = 0; i < n; i++)
    {
        sum += a[i];
        if(sum <= m)
            pfs("0 \n");

        else
        {
            temp = 0; k = 0;
            req = (sum - a[i]) - (m - a[i]);

            for(j = 100; j > 0; j--)
            {
                //out<<"\ni : "<<i<<" temp: "<<temp<<" "<<(m-a[i])<<endl;
                if(mp[j] && temp < req)
                {
                    x = req - temp;
                    if(x % j == 0)
                        x /= j;
                    else
                        x = (x / j) + 1;

                    x = min(x, mp[j]);

                    temp += x * j;
                    k += x;
                }
            }

            pfl(k), nl;
        }

        mp[a[i]]++;
    }
    return 0;
}
