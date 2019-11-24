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

int dist[N], cuts[N];

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;

    sf(n);
    for(i = 1; i <= n; i++)
        sf(cuts[i]);

    fill(dist, dist + N , -1);

    queue<int> q;
    dist[1] = 0;
    q.push(1);

    while(q.size())
    {
        k = q.front();
        q.pop();

        if(k + 1 <= n && dist[k + 1] == -1)
            dist[k + 1] = dist[k] + 1, q.push(k + 1);
            
        if(dist[cuts[k]] == -1)
            dist[cuts[k]] = dist[k] + 1, q.push(cuts[k]);
            
        // didn't notice that you can move backwards too
        if(k - 1 > 0 && dist[k - 1] == -1)
            dist[k - 1] = dist[k] + 1, q.push(k - 1);
    }

    for(i = 1; i <= n; i++)
        pf(dist[i]), pfs(" ");

    return 0;
}

