/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 1055
#define inf 10000000

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

bool vis[N];

int main()
{
    int i,j,k;
    int n,m;
    int t;

    sff(n,k);

    memset(vis,0,sizeof(vis));
    vector<int> vec, temp;

    int ans,cnt,l,curr;

    ans=inf;

    for(i=1; i<=n; i++)
    {
        //starting from i
        memset(vis,0,sizeof(vis));
        cnt=0;

        curr=i;
        while(curr<=n)
        {
            temp.push_back(curr);
            cnt++;

            vis[curr]=1;

            m=k; j=curr-1;
            while(m--)
            {
                if(j<=0) break;
                vis[j]=1;j--;
            }

            m=k; j=curr+1;
            while(m--)
            {
                vis[j]=1;
                j++;
            }

            curr=curr+2*k+1;

        }

        m=0;
        for(j=1;j<=n;j++)
        {
            if(!vis[j]){m++;break;}
        }

        if(ans>cnt && !m){
            ans=cnt; vec.clear();
            for(int e : temp)
                vec.pb(e);
        }

        temp.clear();
    }

    pf(ans);
    pfs("\n");
    for(int e : vec)
        pf(e);

    return 0;
}
