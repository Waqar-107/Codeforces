/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 60

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
    int n,m,k2;
    ll cnt=0;

    sff(n,k); k2=k;

    if(n==1){
        pfs("0");
        return 0;
    }

    //required n/2 swaps to reverse, have more op left
    else if(n/2<=k)
    {
        for(i=1;i<n;i++)
            cnt+=(ll)(n-i);

        pfl(cnt);
        return 0;
    }

    int a[n+1];
    for(i=1;i<=n;i++)
        a[i]=i;

    i=1, j=n;
    while(k && i<j)
    {
        k--;
        swap(a[i], a[j]);

        i++;j--;
    }

    k=k2;
    for(i=1;i<=k;i++)
        cnt+=(ll)(n-i);

    for(i=k+1;i<n-k;i++)
        cnt+=(ll)k;

    for(i=n-k;i<n;i++)
        cnt+=(ll)(n-i);

    pfl(cnt);

    return 0;
}
