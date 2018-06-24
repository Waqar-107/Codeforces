/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 200100
#define inf 100000000
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
    int n,m,r;

    m=0;
    cin>>n;

    if(n/100)
        m+=(n/100), n-=(n/100)*100;

    if(n/20)
        m+=(n/20), n-=(n/20)*20;

    if(n/10)
        m+=(n/10), n-=(n/10)*10;

    if(n/5)
        m+=(n/5), n-=(n/5)*5;

    m+=n;

    cout<<m;
    return 0;
}
