/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 20100
#define pp pair<int,int>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)

#define pb push_back

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;

    sff(n,k);

    deque<int> q;
    for(i=0;i<n;i++)
        sf(m), q.push_back(m);

    int cnt=0;
    while(q.size()>0)
    {
            if(q.front()<=k)
                q.pop_front(), cnt++;

            else if(q.back()<=k)
                q.pop_back(), cnt++;

            else
                break;
    }

    pf(cnt);

    return 0;
}
