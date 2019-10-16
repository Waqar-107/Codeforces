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
#define pp pair<int, int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;
    vector<int> z, neg, pos;

    sf(n);
    int cnt = 0;

    int a[n];
    for(i = 0; i < n; i++)
    {
        sf(a[i]);

        if(a[i] > 0)
            pos.pb(i + 1);

        else if(a[i] < 0)
            neg.pb(i + 1);

        else
            z.pb(i + 1);
    }

    // multiply 0 with 0
    int zidx = -1;
    if(z.size() >= 2)
    {
        for(i = 0; i < z.size() - 1; i++)
        {
            if(cnt < n - 1)
                pfs("1 "), pff(z[i], z[i + 1]), nl, cnt++;
        }
    }

    // the last zero
    if(z.size())
        zidx = z[z.size() - 1];

    if(z.size() == n)return 0;

    /* if there's no zero
    => if there are even no. of neg then no problem
    => if there are odd no. of neg then remove the biggest negative
    */
    int nidx = -1, mn = inf + 100;
    if(zidx == -1)
    {
        if(neg.size() % 2)
        {
            for(i = 0; i < neg.size(); i++)
            {
                if(abs(a[neg[i] - 1]) < mn)
                    mn = abs(a[neg[i] - 1]), nidx = neg[i];
            }

            if(cnt < n - 1)
                pff(2, nidx), nl, cnt++;
        }

        for(i = 0; i < neg.size(); i++)
        {
            if(nidx == neg[i])
                continue;

            pos.pb(neg[i]);
        }

        if(pos.size())
        {
            for(i = 0; i < pos.size() - 1; i++)
            {
                if(cnt < n - 1)
                    pfs("1 "), pff(pos[i], pos[i + 1]), nl, cnt++;
            }
        }
    }

    /* if there's is zero
    => if the number of neg is even then remove the zero, product will be > 0
    => if the number of neg is odd then
    the max neg * zero, then remove the zero
    */
    else
    {
        if(neg.size() % 2)
        {
            for(i = 0; i < neg.size(); i++)
            {
                if(abs(a[neg[i] - 1]) < mn)
                    mn = abs(a[neg[i] - 1]), nidx = neg[i];
            }

            if(cnt < n - 1)
                pfs("1 ") ,pff(nidx, zidx), nl, cnt++;
        }

        if(cnt < n - 1)
            pff(2, zidx), nl, cnt++;

        for(i = 0; i < neg.size(); i++)
        {
            if(nidx != neg[i])
                pos.pb(neg[i]);
        }

        if(pos.size())
        {
            for(i = 0; i < pos.size() - 1; i++)
            {
                if(cnt < n - 1)
                    pfs("1 "), pff(pos[i], pos[i + 1]), nl, cnt++;
            }
        }
    }

    return 0;
}
