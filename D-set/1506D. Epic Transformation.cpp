/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1010
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
    int n, m, t;

    sf(t);
    while(t--)
    {
        sf(n);
        map<int, int> cnt;

        for(i = 0; i < n; i++)
            sf(k), cnt[k]++;

        priority_queue<int> pq;
        for(auto itr = cnt.begin(); itr != cnt.end(); itr++)
            pq.push(itr->second);

        while(pq.size() >= 2)
        {
            i = pq.top();
            pq.pop();

            j = pq.top();
            pq.pop();

            i--, j--, n -= 2;

            if(i) pq.push(i);
            if(j) pq.push(j);
        }

        pf(n); nl;
    }

    return 0;
}
