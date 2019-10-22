

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
#define pp pair<int, int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;
    int t, x;

    sff(n, m);

    int uno = 1, dos = 2;
    while(m--)
    {
        sf(t);

        if(t == 1)
        {
            sf(x);

            uno += x;
            dos += x;

            if(uno < 0)
                uno += n;
            if(dos < 0)
                dos += n;

            uno %= n;
            if(uno == 0)
                uno = n;

            dos %= n;
            if(dos == 0)
                dos = n;
        }

        else
        {
            if(uno % 2)
                uno++;
            else
                uno--;

            if(dos % 2)
                dos++;
            else
                dos--;
        }

        // cout<<uno<<" "<<dos;nl;
    }

    int ans[n + 1];

    ans[uno] = 1;
    for(i = 3; i <= n; i += 2)
    {
        uno += 2;
        uno %= n;

        if(uno == 0)
            uno = n;

        ans[uno] = i;
    }

    ans[dos] = 2;
    for(i = 4; i <= n; i += 2)
    {
        dos += 2;
        dos %= n;

        if(dos == 0)
            dos = n;

        ans[dos] = i;
    }

    for(i = 1; i <= n; i++)
        pf(ans[i]), pfs(" ");

    return 0;
}
