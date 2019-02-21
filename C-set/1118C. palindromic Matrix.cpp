/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 500
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
#define pp pair<int,int>

using namespace std;

int n, m;
int a[N];
map<int,int> mp;

int getV(int z)
{
    for(int i = 0; i < m; i++)
    {
        if(mp[a[i]] >= z){
            mp[a[i]] -= z;
            return a[i];
        }
    }

    pfs("NO\n");
    exit(0);
}

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int x, y, x2, y2;

    sf(n);
    m = n * n;

    for(i = 0; i < m; i++)
        sf(a[i]), mp[a[i]]++;

    if(n == 1)
    {
        pfs("YES\n");
        pf(a[0]);
        return 0;
    }

    int ans[n][n];

    x=0, y = n - 1;
    while(x < y)
    {
        x2 = 0, y2 = n - 1;
        while(x2  < y2)
        {
            k = getV(4);
            ans[x][x2] = k;
            ans[x][y2] = k;
            ans[y][x2] = k;
            ans[y][y2] = k;

            x2++, y2--;
        }

        x++, y--;
    }

    if(n % 2)
    {
        //the column
        x = 0, y = n - 1;
        while(x < y)
        {
            k = getV(2);

            ans[x][n / 2] = k;
            ans[y][n / 2] = k;

            x++, y--;
        }

        //the row
        x = 0, y = n - 1;
        while(x < y)
        {
            k = getV(2);

            ans[n / 2][x] = k;
            ans[n / 2][y] = k;

            x++, y--;
        }

        //the only element
        k = getV(1);
        ans[n / 2][n / 2] = k;
    }

    pfs("YES\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            pf(ans[i][j]), pfs(" ");

        nl;
    }

    return 0;
}
