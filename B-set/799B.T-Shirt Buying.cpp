/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 30100
#define inf 1000000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d\n",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

class cmp
{
public:
    bool operator()(pp a, pp b){
        return a.first>b.first;
    }
};

priority_queue<pp,vector<pp>,cmp> pq[4];


int main()
{
    freopen("in.txt","r",stdin);

    int i,j,k;
    int n,m;
    int x,y;

    sf(n);

    int p[n], f[n], b[n];
    bool taken[n+1];
    memset(taken,0,sizeof(taken));

    for(i=0;i<n;i++) sf(p[i]);
    for(i=0;i<n;i++) sf(f[i]);
    for(i=0;i<n;i++) sf(b[i]);

    for(i=0;i<n;i++)
    {
        pq[f[i]].push({p[i],i+1});
        pq[b[i]].push({p[i],i+1});
    }

    sf(m);
    while(m--)
    {
        sf(k);

        x=-1;
        while(!pq[k].empty())
        {
            pp u=pq[k].top(); pq[k].pop();

            //cout<<k<<" "<<u.first<<" "<<u.second<<" "<<taken[u.second];nl
            if(taken[u.second])
                continue;

            taken[u.second]=1;
            x=u.first;
            break;
        }

        pf(x);
    }

    return 0;
}
