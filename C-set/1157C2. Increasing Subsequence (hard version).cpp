/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1010101
#define inf 1e18
#define mod 100000007

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
    int n, m, q;

    sf(n);

    int a[n];
    for(i = 0; i < n; i++)
        sf(a[i]);

    k = 0;
    int l = 0, r = n - 1;
    string s;


    while(l <= r)
    {
        if(a[l] == a[r]) {
           break;
        }

        else if(min(a[l], a[r]) > k)
        {
            if(a[l] < a[r])
                k = a[l], l++, s.pb('L');
            else
                k = a[r], r--, s.pb('R');
        }

        else if(max(a[l], a[r]) > k)
        {
            if(a[l] > a[r])
                k = a[l], l++, s.pb('L');
            else
                k = a[r], r--, s.pb('R');
        }

        else break;
    }

    // we either take from left or right
    if(a[l] == a[r])
    {
        //cout<<l<<" "<<r<<" "<<k;nl;
        int x = k, mx = 0;
        for(i = l; i <= r; i++)
        {
            if(x < a[i])
                mx++, x = a[i];
            else break;
        }

        m = 0; x = k;
        for(i = r; i >= l; i--)
        {
            if(x < a[i])
                m++, x = a[i];
            else break;
        }

        if(mx > m) {
            while(mx--) s.pb('L');
        }

        else {
            while(m--) s.pb('R');
        }
    }

    cout << s.length() << endl;
    cout << s;

    return 0;
}
