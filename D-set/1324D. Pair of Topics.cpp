/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 5010
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

int main()
{
    freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m, t;

    sf(n);

    int a[n], b[n];
    for(i = 0; i < n; i++) sf(a[i]);
    for(i = 0; i < n; i++) sf(b[i]);

    /*
        a[i] + a[j] > b[i] + b[j]
        a[i] - b[i] > b[j] - a[j]
    */

    int arr[n], arr2[n];
    for(i = 0; i < n; i++)
        arr[i] = a[i] - b[i], arr2[i] = b[i] - a[i];

    sort(arr, arr + n);

    ll cnt = 0;
    for(i = 0; i < n; i++)
    {
        k = upper_bound(arr, arr + n, arr2[i]) - arr;
        //cout<<arr2[i]<<" "<<k;nl;
        if(k < n)
            cnt += (n - k);

        if(arr2[i] < 0) cnt--;

    }

    pfl(cnt / 2);

    return 0;
}
