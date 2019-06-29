/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 1000100
#define inf 1e18

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
#define pp pair<char, int>

using namespace std;

bool foo(int n)
{
    int sum = 0;
    while(n)
    {
        sum += (n % 10);
        n /= 10;
    }

    if(sum % 4 == 0)
        return true;
    else
        return false;
}

int main()
{
    //freopen("in.txt", "r", stdin);

    int i, j, k;
    int n, m;

    sf(n);
    while(true)
    {
        if(foo(n)){
            pf(n);
            return 0;
        }

        n++;
    }

    return 0;
}
