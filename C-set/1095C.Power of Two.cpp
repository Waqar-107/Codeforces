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
#define sffl(n,m) scanf("%lld%lld",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<string,int>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;

    cin>>n>>k;

    int sum=0;
    int k2=k, n2=n;
    vector<int> ans;

    for(i=30;i>=0 && k;)
    {
        m = 1<<i;   //garbage if i=31

        if(m>n){i--;continue;}

        if(n-m < k-1){i--;continue;}

        sum+=m;
        ans.pb(m);
        n-=m;
        k--;
    }

    if(ans.size()==k2 && sum==n2){
        pfs("YES\n");
        for(int e : ans)
            cout<<e<<" ";
    }

    else
        pfs("NO");

    return 0;
}
