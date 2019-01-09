/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 6000

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

set<int> ss[N];

int main()
{
    //freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;

    sff(n,k);

    int a[n];
    for(i=0;i<n;i++)sf(a[i]);

    int col[n];

    //at least once use i
    for(i=0;i<k;i++)
        col[i]=i+1, ss[i+1].insert(a[i]);

    for(i=k;i<n;i++)
    {
        col[i]=0;
        for(j=1;j<=k;j++)
        {
            if(ss[j].find(a[i])!=ss[j].end())
                continue;

            ss[j].insert(a[i]);
            col[i]=j;
            break;
        }

        if(col[i]==0){
            pfs("NO\n");
            return 0;
        }
    }



    pfs("YES\n");
    for(i=0;i<n;i++)
        pf(col[i]), pfs(" ");

    return 0;
}
