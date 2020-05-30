/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 110
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

    sf(t);
    while(t--)
    {
        sf(n);
        int arr[n];
        for(i = 0; i < n; i++) sf(arr[i]);

        j = 0, k = n - 1;
        int a = 0, b = 0;
        int la = 0, lb = 0, cnt = 0;
        m = 0;

        while(j <= k)
        {
            if(!m)
            {
                //cout << "alice "<<j<<" "<<k;nl;
                la = 0;
                for(i = j; i <= k; i++)
                {
                    a += arr[i]; j = i + 1;
                    la += arr[i];
                    if(la > lb)
                        break;
                }
            }

            else
            {
                lb = 0;
                for(i = k; i >= j; i--)
                {
                    b += arr[i]; k = i - 1;
                    lb += arr[i];
                    if(lb > la)
                        break;
                }
            }

            m = !m;
            cnt++;
        }

        cout << cnt << " " << a << " " <<b;nl;
    }

    return 0;
}
