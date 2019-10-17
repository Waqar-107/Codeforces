/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
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
#define pp pair<ll, ll>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;

    sf(n);

    int a[n][n];
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            sf(a[i][j]);
    }

    pp sum[n][n];
    ll cnt = 0;

    // ------------------------------------------
    // primary
    for(i = 0; i < n; i++)
    {
        j = i, k = 0;
        cnt = 0;
        while(j >= 0)
        {
            cnt += a[j][k];
            j--, k++;
        }

        j = i, k = 0;
        while(j >= 0)
        {
            sum[j][k].first = cnt;
            j--, k++;
        }
    }

    for(i = 1; i < n; i++)
    {
        j = n - 1, k = i;
        cnt = 0;
        while(k < n)
        {
            cnt += a[j][k];
            j--, k++;
        }

        j = n - 1, k = i;
        while(k < n)
        {
            sum[j][k].first = cnt;
            j--, k++;
        }
    }
    // ------------------------------------------

    // ------------------------------------------
    // secondary
    for(i = 0; i < n; i++)
    {
        j = i, k = n - 1;
        cnt = 0;
        while(j >= 0)
        {
            cnt += a[j][k];
            j--, k--;
        }

        j = i, k = n - 1;
        while(j >= 0)
        {
            sum[j][k].second = cnt;
            j--, k--;
        }
    }

    for(i = n - 2; i >= 0; i--)
    {
        j = n - 1, k = i;
        cnt = 0;
        while(k >= 0)
        {
            cnt += a[j][k];
            j--, k--;
        }

        j = n - 1, k = i;
        while(k >= 0)
        {
            sum[j][k].second = cnt;
            j--, k--;
        }
    }
    // ------------------------------------------

    ll ans = 0, mx = 0, temp;
    int r1, r2, c1, c2;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            // odd
            if((i + j) % 2)
            {
                temp = sum[i - 1][j - 1].first + sum[i - 1][j - 1].second - (a[i - 1][j - 1]);
                if(temp >= mx)
                    mx = temp, r1 = i, c1 = j;
            }
        }
    }

    ans += mx;
    mx = 0;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            // even
            if((i + j) % 2 == 0)
            {
                temp = sum[i - 1][j - 1].first + sum[i - 1][j - 1].second - (a[i - 1][j - 1]);
                if(temp >= mx)
                    mx = temp, r2 = i, c2 = j;
            }
        }
    }
    
    ans += mx;
    pfl(ans); nl;
    pff(r1, c1); pfs(" "); pff(r2, c2);

    return 0;
}
