/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n");
#define nl printf("\n");
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
    freopen("in.txt", "r", stdin);

    int i,j,k;
    int n,m;

    sff(n,m);
    int a[n];

    for(i=0; i<n; i++)
        sf(a[i]);

    if(n == 1){
        pfs("0");
        return 0;
    }

    sort(a,a+n);

    ll cnt=0;
    int r = 1;

    m = a[n-1];
    for(i = 0; i<n-1; i++)
    {
        if(a[i] == 1){
            r = 2;
            continue;
        }

        if(r == m)
            cnt += (a[i] - 1);

        else
        {
            if(a[i] >= r)
                r++;

            cnt += (a[i] - 1);
        }

        //cout<<cnt<<" "<<r;nl;
    }

    if(r < m)
        cnt += (r - 1);

    else
        cnt += (m - 1);

    pfl(cnt);

    return 0;
}
