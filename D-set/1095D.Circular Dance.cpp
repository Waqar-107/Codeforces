/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 100100

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

int main()
{
    //freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;
    int x,y;

    sf(n);

    pp a[n+1];
    for(i=1;i<=n;i++)
    {
        sff(x,y);
        a[i]={x,y};
    }

    vector<int> ans;
    ans.pb(1);

    while(ans.size()<n)
    {
        k = ans.back();

        x=a[k].first, y=a[k].second;

        //if x is in front then
        if(a[x].first == y || a[x].second == y){
            ans.pb(x);ans.pb(y);
        }

        else{
            ans.pb(y);ans.pb(x);
        }

    }

    for(i=0;i<n;i++)
        pf(ans[i]), pfs(" ");

    return 0;
}
