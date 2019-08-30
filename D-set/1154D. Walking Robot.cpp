/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 35
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
    int n, m, b, a, ca;

    sf(n); sff(b, a);
    int arr[n];

    for(i = 0; i < n; i++)
        sf(arr[i]);

    ca = a;

    k = 0;
    for(i = 0; i < n; i++)
    {
        if(!ca && !b)break;

        //light
        if(arr[i])
        {
            if(ca && b)
            {
                if(ca < a)
                    b--, ca++;
                else
                    ca--;

                k = i + 1;
            }

            else if(ca && !b)
                ca--, k = i + 1;

            else if(!ca && b)
                ca++, k = i + 1, b--;
        }


        else
        {
            if(ca)
                ca--;
            else
                b--;

            k = i + 1;
        }
    }

    pf(k);

    return 0;
}
