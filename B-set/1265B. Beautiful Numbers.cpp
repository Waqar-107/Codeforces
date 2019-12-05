/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 201010
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

int a[N];
int idx[N];
bool isGood[N];

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;
    int x, y;

    sf(t);
    while(t--)
    {
        sf(n);

        memset(isGood, 0, sizeof(isGood));

        for(i = 1; i <= n; i++)
            sf(a[i]), idx[a[i]] = i;

        set<int> s;
        s.insert(1);
        isGood[1] = true;

        x = y = idx[1];

        for(i = 2; i <= n; i++)
        {
            k = idx[i];

            // already taken
            if(x <= k && k <= y)
            {
                if(s.size() == i)
                    isGood[i] = true;
            }

            // expand
            else if(x > k)
            {
                for(j = x - 1; j >= k; j--)
                    s.insert(a[j]);

                x = k;
            }

            else if(k > y)
            {
                for(j = y + 1; j <= k; j++)
                    s.insert(a[j]);

                y = k;
            }

            //cout<<s.size();nl;
           // cout << i  << " " << x << " " << y <<" " << k;nl;

            if(s.size() == i)
                isGood[i] = true;
        }

        for(i = 1; i <= n; i++)
        {
            if(isGood[i])
                pf(1);
            else
                pf(0);
        }

        nl;
    }

    return 0;
}
